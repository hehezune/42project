/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 15:31:23 by bonkim            #+#    #+#             */
/*   Updated: 2022/05/04 12:03:06 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<stdlib.h>

int	*ft_range(int min, int max)
{
	long long	size;
	int			*arr;
	long long	idx;

	idx = 0;
	if (min >= max)
		return (NULL);
	size = (long long)max - (long long)min;
	arr = (int *)malloc(sizeof(int) * size);
	if (!arr)
		return (NULL);
	while (idx < size)
	{
		arr[idx] = min + idx;
		idx++;
	}
	return (arr);
}
/*
#include	<stdio.h>

int	main(void)
{
	int	*ptr;
	int idx = 0;

	ptr = ft_range(10, 20);
	for (int i = 10; i < 20; i++)
	{
		printf("addr check : %p\n", ptr);
		printf("index %d result : %d\n", idx, ptr[idx]);
		idx++;
	}
	printf("%p", ptr);
	free(ptr);
}
*/
