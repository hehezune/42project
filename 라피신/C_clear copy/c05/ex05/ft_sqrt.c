/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 22:24:21 by bonkim            #+#    #+#             */
/*   Updated: 2022/05/01 11:50:31 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_sqrt(int nb)
{
	int	idx;

	idx = 1;
	if (nb < 0)
		return (0);
	while (idx <= 46340)
	{
		if (idx * idx == nb)
			return (idx);
		else if (idx * idx > nb)
			break ;
		idx++;
	}
	return (0);
}
/*
#include	<stdio.h>
int	main(void)
{
	for (int i = -20; i < 15; i++)
	{
		printf("input %d, result : %d\n", i,ft_sqrt(i));
	}
}
*/
