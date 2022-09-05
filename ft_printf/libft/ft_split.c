/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <bonkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 20:52:51 by bonkim            #+#    #+#             */
/*   Updated: 2022/08/27 14:10:17 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_length(char *src, char c)
{
	int	idx;

	idx = 0;
	while (src[idx] && src[idx] != c)
		idx++;
	return (idx);
}

static char	*make_word(char *str, char c, int *total_idx)
{
	char	*ptr;
	int		idx;

	idx = 0;
	ptr = (char *)malloc(sizeof(char) * (word_length(str, c) + 1));
	if (!ptr)
		return (NULL);
	while (str[idx] && str[idx] != c)
	{
		ptr[idx] = str[idx];
		(*total_idx)++;
		idx++;
	}
	ptr[idx] = '\0';
	while (str[idx] == c)
	{
		(*total_idx)++;
		idx++;
	}
	return (ptr);
}

static int	net_word_nbr(char *str, char c)
{
	int	word_count;
	int	idx;

	word_count = 0;
	idx = 0;
	while (str[idx])
	{
		if (str[idx] != c && (str[idx + 1] == c || str[idx + 1] == '\0'))
			word_count++;
		idx++;
	}
	return (word_count);
}

static char	**all_free(char **total_addr, char *present_addr, int memory_end)
{
	int	idx;

	idx = 0;
	if (!present_addr)
	{
		while (idx < memory_end)
			free(*total_addr + idx++);
		free(total_addr);
	}
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		idx;
	int		word_count;
	int		total_idx;

	if (!s)
		return (NULL);
	word_count = net_word_nbr((char *)s, c);
	result = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (NULL);
	idx = 0;
	total_idx = 0;
	while (s[total_idx] == c && s[total_idx])
		total_idx++;
	while (idx < word_count)
	{
		result[idx] = make_word((char *)s + total_idx, c, &total_idx);
		if (!result[idx])
			return (all_free(result, *result + idx, idx));
		idx++;
	}
	result[idx] = NULL;
	return (result);
}
