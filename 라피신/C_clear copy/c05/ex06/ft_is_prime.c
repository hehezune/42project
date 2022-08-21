/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 23:21:35 by bonkim            #+#    #+#             */
/*   Updated: 2022/04/30 17:22:26 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb)
{
	int	idx;

	idx = 2;
	if (nb < 2)
		return (0);
	while (idx * idx <= nb && idx <= 46340)
	{
		if (nb % idx == 0)
			return (0);
		idx++;
	}
	return (1);
}
/*
#include	<stdio.h>

int	main(void)
{
	int	i, n;
	n = 30;
	for (i = 1 ; i <= n; i++)
	{
		printf("input %d : %d \t", i, ft_is_prime(i)); 
	}
}
*/
