/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_08.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 14:48:02 by bonkim            #+#    #+#             */
/*   Updated: 2022/04/20 09:55:02 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_sort_int_tab.c"
#include	<stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int arr[9] = {11, 3, 5, 7, 1, 6, 2, 9 ,8};

	ft_sort_int_tab(arr, 9);
	int i;
	for ( i = 0; i < 9; i++)
	{
		printf("%d", arr[i]);
	}
}
