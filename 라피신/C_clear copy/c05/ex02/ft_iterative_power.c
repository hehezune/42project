/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterativ_power.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 16:04:01 by bonkim            #+#    #+#             */
/*   Updated: 2022/04/30 11:23:24 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	result = 1;
	while (power-- > 0)
		result *= nb;
	return (result);
}
/*
#include	<stdio.h>

int	main(void)
{
	printf("case 1 n: 0, p: 0, result : %d\n", ft_iterative_power(0, 0));
	printf("case 2 n: 0, p: 1, result : %d\n", ft_iterative_power(0, 1));
	printf("case 3 n: -3, p: 1, result : %d\n", ft_iterative_power(-3, 1));
	printf("case 4 n: -3, p: 0, result : %d\n", ft_iterative_power(-3, 0));
	printf("case 5 n: 2, p: 5, result : %d\n", ft_iterative_power(2, 5));
	printf("case 6 n: 3, p: 5, result : %d\n", ft_iterative_power(3, 5));
}*/
