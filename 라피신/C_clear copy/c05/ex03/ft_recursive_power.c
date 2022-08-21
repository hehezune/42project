/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 18:01:09 by bonkim            #+#    #+#             */
/*   Updated: 2022/04/30 11:30:10 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
#include	<stdio.h>

int	main(void)
{
	printf("case 1 - nb: 0, power: 0,result : %d\n", ft_recursive_power(0,0));
	printf("case 2 - nb: 0, power: 1,result : %d\n", ft_recursive_power(0,1));
	printf("case 3 - nb: -2, power: 0,result : %d\n", ft_recursive_power(-2,0));
	printf("case 4 - nb: -2, power: 3,result : %d\n", ft_recursive_power(-2,3));
	printf("case 5 - nb: -2, power: 4,result : %d\n", ft_recursive_power(-2,4));
	printf("case 6 - nb: 2, power: 0,result : %d\n", ft_recursive_power(2,0));
	printf("case 7 - nb: 2, power: 3,result : %d\n", ft_recursive_power(2,3));
}
*/
