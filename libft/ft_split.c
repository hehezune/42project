/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <bonkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 20:52:51 by bonkim            #+#    #+#             */
/*   Updated: 2022/08/05 16:51:56 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_length(char *src, char c)
{
	int	index;

	index = 0;
	while (src[index] && src[index] != c)
		index++;
	return (index);
}

static char	*make_word(char *str, char c, int *total_index)
{
	char	*ptr;
	int		index;

	index = 0;
	ptr = (char *)malloc(sizeof(char) * (word_length(str, c) + 1));
	if (!ptr)
		return (NULL);
	while (str[index] && str[index] != c)
	{
		ptr[index] = str[index];
		(*total_index)++;
		index++;
	}
	ptr[index] = '\0';
	while (str[index] == c)
	{
		(*total_index)++;
		index++;
	}
	return (ptr);
}

static int	net_word_nbr(char *str, char c)
{
	int	word_count;
	int	index;

	word_count = 0;
	index = 0;
	while (str[index])
	{
		if (str[index] != c && (str[index + 1] == c || str[index + 1] == '\0'))
			word_count++;
		index++;
	}
	return (word_count);
}

static char	**all_free(char **total_addr, char *present_addr, int memory_end)
{
	int	index;

	index = 0;
	if (!present_addr)
	{
		while (index < memory_end)
			free(*total_addr + index++);
		free(total_addr);
	}
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		index;
	int		word_count;
	int		total_index;

	if (!s)
		return (NULL);
	word_count = net_word_nbr((char *)s, c);
	result = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (NULL);
	index = 0;
	total_index = 0;
	while (s[total_index] == c && s[total_index])
		total_index++;
	while (index < word_count)
	{
		result[index] = make_word((char *)s + total_index, c, &total_index);
		if (!result[index])
			return (all_free(result, *result + index, index));
		index++;
	}
	result[index] = NULL;
	return (result);
}
