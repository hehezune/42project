/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 15:23:44 by bonkim            #+#    #+#             */
/*   Updated: 2022/04/30 15:02:26 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	result;

	result = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (--nb > 0)
		result = result * nb;
	return (result);
}
/*
#include	<stdio.h>

int	main(void)
{
	printf("case 1 : nb = 0 %d\n", ft_iterative_factorial(0));
	printf("case 2 : nb = -5 %d\n", ft_iterative_factorial(-5));
	printf("case 3 : nb = 4 %d\n", ft_iterative_factorial(4));
	printf("case 4 : nb = 1 %d\n", ft_iterative_factorial(1));
}
*/
