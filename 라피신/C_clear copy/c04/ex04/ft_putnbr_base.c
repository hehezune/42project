/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 15:15:48 by bonkim            #+#    #+#             */
/*   Updated: 2022/04/28 18:03:07 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

int	overlap_check(char *str, char idx)
{
	if (str[(int)idx] > 0)
		return (1);
	str[(int)idx]++;
	return (0);
}

int	numeral_check(char *str)
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
		if (overlap_check(overlap_pool, str[idx]))
			return (0);
		idx++;
	}
	if (idx < 2)
		return (0);
	return (idx);
}

void	print_nbr(long abs_nbr, char *base, int length)
{
	char	result[33];
	int		idx;

	idx = 0;
	if (abs_nbr == 0)
	{
		write(1, "0", 1);
		return ;
	}
	while (abs_nbr > 0)
	{
		result[32 - idx] = base[abs_nbr % length];
		abs_nbr /= length;
		idx++;
	}
	write(1, result + 33 - idx, idx);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	abs_nbr;
	int		length;

	abs_nbr = 0;
	if (!numeral_check(base))
		return ;
	length = numeral_check(base);
	if (nbr < 0)
	{
		abs_nbr = (long) nbr * (-1);
		write(1, "-", 1);
	}
	else
		abs_nbr = nbr;
	print_nbr(abs_nbr, base, length);
}
