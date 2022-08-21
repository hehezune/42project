/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 15:29:57 by bonkim            #+#    #+#             */
/*   Updated: 2022/05/04 12:14:00 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<stdlib.h>

int	space_check(char str);
int	sign_check(char str);
int	base_idx(char str, char *base);
int	ft_strlen(char *str);

int	base_check(char *str)
{
	int		idx;
	char	overlap_pool[256];

	idx = 0;
	while (idx < 256)
		overlap_pool[idx++] = 0;
	idx = 0;
	while (str[idx])
	{
		if (str[idx] == '+' || str[idx] == '-')
			return (0);
		if ((str[idx] >= 9 && str[idx] <= 13) || str[idx] == 32)
			return (0);
		if (overlap_pool[(int)str[idx] + 128] > 0)
			return (0);
		overlap_pool[(int)str[idx] + 128]++;
		idx++;
	}
	if (idx < 2)
		return (0);
	return (idx);
}

int	ft_atoi_base(char *str, char *base)
{
	int				idx;
	unsigned int	result;
	int				sign;
	int				length;

	sign = 1;
	result = 0;
	length = base_check(base);
	if (length == 0)
		return (0);
	idx = 0;
	while (space_check(str[idx]))
		idx++;
	while (sign_check(str[idx]) != 0)
		sign *= sign_check(str[idx++]);
	while (base_idx(str[idx], base) != -1)
		result = result * length + base_idx(str[idx++], base);
	return (result * sign);
}

char	*ft_itoa_base(long nbr, int sign, char *base_to, int digit_length)
{
	char	*result;
	int		length;
	int		idx;

	if (nbr == 0)
		digit_length++;
	result = (char *)malloc(sizeof(char) * (digit_length + 1));
	if (!result)
		return (NULL);
	if (sign < 0)
		result[0] = '-';
	length = base_check(base_to);
	result[digit_length] = '\0';
	idx = 1;
	if (nbr == 0)
		result[0] = base_to[0];
	while (nbr > 0)
	{
		result[digit_length - idx] = base_to[nbr % length];
		nbr /= length;
		idx++;
	}
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*result;
	long	atoi_result;
	int		digit_length;
	int		sign;

	sign = 1;
	digit_length = 0;
	if (base_check(base_from) * base_check(base_to) == 0)
		return (NULL);
	atoi_result = ft_atoi_base(nbr, base_from);
	if (atoi_result < 0)
	{
		digit_length++;
		sign = -1;
		atoi_result *= -1;
	}
	while (atoi_result > 0)
	{
		atoi_result /= ft_strlen(base_to);
		digit_length++;
	}
	atoi_result = sign * (long) ft_atoi_base(nbr, base_from);
	result = ft_itoa_base(atoi_result, sign, base_to, digit_length);
	return (result);
}
/*
#include	<stdio.h>
int	main(void)
{
	char from[] = "01234";
	char	to[] = "012345";
	char	nbr[] = " 0";
	char	*arr;

	arr = ft_convert_base(nbr, from, to);
	printf("%s", arr);
}
*/
