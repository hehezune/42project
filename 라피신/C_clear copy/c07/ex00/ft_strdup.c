/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 14:32:27 by bonkim            #+#    #+#             */
/*   Updated: 2022/05/04 10:48:56 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<stdlib.h>

int	ft_strlen(char *src)
{
	int	idx;

	idx = 0;
	while (*(src + idx))
		idx++;
	return (idx);
}

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		idx;

	ptr = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!ptr)
		return (0);
	idx = 0;
	while (*(src + idx))
	{
		*(ptr + idx) = *(src + idx);
		idx++;
	}
	*(ptr + idx) = '\0';
	return (ptr);
}
/*
#include	<stdio.h>
int	main(void)
{
	char test[] = "abcdeff";
	char *arr;
	arr = ft_strdup(test);
	printf("result : %s", arr);
	free(arr);
}
*/
