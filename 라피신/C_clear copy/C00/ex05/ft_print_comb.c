/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 11:26:38 by bonkim            #+#    #+#             */
/*   Updated: 2022/04/20 19:41:53 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	print_numbers(char *arr);

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;
	char	comb_numb[3];

	a = '0';
	while (a <= '7')
	{
		comb_numb[0] = a;
		b = a + 1;
		while (b <= '8')
		{
			comb_numb[1] = b;
			c = b + 1;
			while (c <= '9')
			{
				comb_numb[2] = c;
				print_numbers(comb_numb);
				c++;
			}
			b++;
		}
		a++;
	}
}

void	print_numbers(char *arr)
{
	write(1, arr, 3);
	if (arr[0] != '7')
	{
		write(1, ", ", 2);
	}
}
