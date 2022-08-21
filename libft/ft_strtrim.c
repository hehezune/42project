/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <bonkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 20:18:06 by bonkim            #+#    #+#             */
/*   Updated: 2022/08/03 15:47:13 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char cha, char *set)
{
	size_t	index;

	index = 0;
	while (set[index])
	{
		if (cha == set[index])
			return (1);
		index++;
	}
	return (0);
}

static size_t	trim(char *s1, char *set, int flag)
{
	size_t	length;
	size_t	index;

	length = ft_strlen(s1);
	index = 0;
	if (flag == 1)
	{
		while (s1[index])
			if (is_set(s1[index], set))
				index++;
		else
			return (index);
		return (index);
	}
	else
	{
		while (length > 0 && s1[--length])
			if (is_set(s1[length], set))
				;
		else
			return (length);
		return (length);
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	length;
	size_t	front;
	size_t	back;
	char	*trimed_str;

	if (!s1)
		return (NULL);
	length = ft_strlen(s1);
	front = trim((char *)s1, (char *)set, 1);
	back = length - trim((char *)s1, (char *)set, 0);
	if (front == ft_strlen(s1))
		length = 0;
	else
		length = length - front - back + 1;
	trimed_str = (char *)malloc(length + 1);
	if (!trimed_str)
		return (NULL);
	ft_memmove(trimed_str, s1 + front, length);
	trimed_str[length] = 0;
	return (trimed_str);
}
