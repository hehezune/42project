/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 13:19:49 by bonkim            #+#    #+#             */
/*   Updated: 2022/04/20 19:45:17 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	print_numb(int numb);

void	ft_print_comb2(void)
{
	int	fst_numb;
	int	snd_numb;

	fst_numb = 0;
	while (fst_numb < 99)
	{
		snd_numb = fst_numb + 1;
		while (snd_numb <= 99)
		{
			print_numb(fst_numb);
			write(1, " ", 1);
			print_numb(snd_numb);
			if (fst_numb != 98)
				write(1, ", ", 2);
			snd_numb++;
		}
		fst_numb++;
	}
}

void	print_numb(int number)
{
	char	a;
	char	b;

	a = number / 10 + '0';
	b = number % 10 + '0';
	write(1, &a, 1);
	write(1, &b, 1);
}
