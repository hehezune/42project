/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 16:07:07 by bonkim            #+#    #+#             */
/*   Updated: 2022/05/04 12:11:32 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int			*arr;
	long long	size;
	int			idx;

	idx = 0;
	size = (long long)max - (long long)min;
	if (size <= 0)
	{
		arr = NULL;
		return (0);
	}
	arr = (int *)malloc(sizeof(int) * size);
	if (!arr)
		return (-1);
	if (size > 2147483647)
		return (-1);
	while (idx < size)
	{
		arr[idx] = min + idx;
		idx++;
	}
	*range = arr;
	return (size);
}
/*
#include	<stdio.h>
int	main(void)
{
	int	**ptr;
	int length;
	int *test;

	ptr = &test;
	length = ft_ultimate_range(ptr, -2147483640, 2147438);
	printf("range %d\n",length);
	for ( int i = 0; i < length; i++)
		printf("ptr  : %d", *(*ptr+i));
	free(ptr);
}
*/
