/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 10:55:57 by bonkim            #+#    #+#             */
/*   Updated: 2022/05/01 11:51:09 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_find_next_prime(int nb)
{
	int	idx;

	if (nb < 2)
		return (2);
	idx = 2;
	while (idx * idx <= nb && idx <= 46340)
	{
		if (nb % idx == 0)
			return (ft_find_next_prime(nb + 1));
		idx++;
	}
	return (nb);
}
/*
#include	<stdio.h>

int	main(void)
{
	int i;
	scanf("%d", &i);
	printf("input : %d, result : %d", i, ft_find_next_prime(i));
}
*/
