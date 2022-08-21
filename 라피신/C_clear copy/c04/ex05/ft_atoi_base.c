/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 10:37:06 by bonkim            #+#    #+#             */
/*   Updated: 2022/04/27 19:06:07 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	numeral_is_ok(char *str)
{
	int		idx;
	char	overlap_pool[127];

	idx = 0;
	while (idx < 127)
		overlap_pool[idx++] = 0;
	idx = 0;
	while (str[idx])
	{
		if (str[idx] == '+' || str[idx] == '-')
			return (0);
		if ((str[idx] >= 9 && str[idx] <= 13) || str[idx] == 32)
			return (0);
		if (overlap_pool[(int)str[idx]] > 0)
			return (0);
		overlap_pool[(int)str[idx]]++;
		idx++;
	}
	if (idx < 2)
		return (0);
	return (idx);
}

int	space_check2(char str)
{
	if ((str >= 9 && str <= 13) || str == 32)
		return (1);
	else
		return (0);
}

int	sign_check2(char str)
{
	if (str == '+')
		return (1);
	else if (str == '-')
		return (-1);
	else
		return (0);
}

int	numeral_check2(char str, char *base)
{
	int	idx;

	idx = 0;
	while (base[idx])
	{
		if (str == base[idx])
			return (idx);
		idx++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	idx;
	int	result;
	int	sign;
	int	length;

	sign = 1;
	result = 0;
	length = numeral_is_ok(base);
	if (length == 0)
		return (0);
	idx = 0;
	while (space_check2(str[idx]))
		idx++;
	while (sign_check2(str[idx]) != 0)
		sign *= sign_check2(str[idx++]);
	while (numeral_check2(str[idx], base) != -1)
		result = result * length + numeral_check2(str[idx++], base);
	return (result * sign);
}
