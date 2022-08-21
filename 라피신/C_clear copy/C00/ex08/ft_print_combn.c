/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 17:25:54 by bonkim            #+#    #+#             */
/*   Updated: 2022/04/20 22:36:10 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	selec_numb(char *numb, int nth_n, int total_n);

void	ft_print_combn(int n)
{
	char	result[9];

	result[0] = '0';
	while (result[0] <= 10 - n + '0')
	{	
		selec_numb(result + 1, 2, n);
		result[0]++;
	}
}

void	selec_numb(char *numb, int nth_n, int total_n)
{
	if (nth_n == total_n + 1)
	{
		write(1, numb - nth_n + 1, total_n);
		if (*(numb - nth_n + 1) != 10 - total_n + '0')
			write(1, ", ", 2);
		return ;
	}
	else
	{
		*numb = *(numb - 1) + 1;
		while (*numb <= 10 - total_n + '0' + nth_n - 1)
		{
			selec_numb(numb + 1, nth_n + 1, total_n);
			*numb = (*numb) + 1;
		}
	}
}
