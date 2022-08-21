/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 16:07:12 by bonkim            #+#    #+#             */
/*   Updated: 2022/04/20 19:51:08 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putnbr(int nb)
{
	unsigned int	nb_temp;
	int				count_digit;
	char			numb[10];

	count_digit = 0;
	if (nb < 0)
	{
		nb_temp = nb * (-1);
		write(1, "-", 1);
	}
	else
		nb_temp = nb;
	while (nb_temp > 0)
	{
		numb[9 - count_digit++] = nb_temp % 10 + '0';
		nb_temp /= 10;
	}
	if (nb == 0)
	{
		count_digit++;
		numb[9] = '0';
	}
	write(1, numb + 10 - count_digit, count_digit);
}
