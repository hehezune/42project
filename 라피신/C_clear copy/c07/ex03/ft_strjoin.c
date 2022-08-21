/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 22:51:23 by bonkim            #+#    #+#             */
/*   Updated: 2022/05/04 12:11:52 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<stdlib.h>

int	ft_strlen(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx])
		idx++;
	return (idx);
}

char	*ft_strcat(char *dest, char *str)
{
	int	idx;

	idx = 0;
	while (*(str + idx))
	{
		*(dest + idx) = *(str + idx);
		idx++;
	}
	*(dest + idx) = '\0';
	return (dest + idx);
}

char	*empty(void)
{
	char	*ptr;

	ptr = (char *)malloc(sizeof(char) * 1);
	if (!ptr)
		return (NULL);
	*ptr = '\0';
	return (ptr);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_length;
	char	*arr;
	char	*ptr;
	int		idx;

	idx = 0;
	total_length = ft_strlen(sep) * (size - 1);
	if (size == 0)
		return (empty());
	while (idx < size)
		total_length += ft_strlen(strs[idx++]);
	arr = (char *)malloc(sizeof(char) * (total_length + 1));
	if (!arr)
		return (0);
	idx = 0;
	ptr = arr;
	while (idx < size - 1)
	{
		arr = ft_strcat(arr, strs[idx]);
		arr = ft_strcat(arr, sep);
		idx++;
	}
	ft_strcat(arr, strs[idx]);
	return (ptr);
}
/*
#include	<stdio.h>
int	main(int argc, char **argv)
{
	char afds[4] = "&&&";
	char *check;

	check = ft_strjoin(argc - 1, argv + 1, afds);
	printf("%s", check);
	free(check);
	return (0);
}
*/
