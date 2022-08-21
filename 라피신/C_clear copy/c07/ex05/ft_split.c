/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 20:35:03 by bonkim            #+#    #+#             */
/*   Updated: 2022/05/04 12:15:39 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<stdlib.h>

int	is_it_deli(char str, char *charset)
{
	int	idx;

	idx = 0;
	while (charset[idx])
	{
		if (str == charset[idx])
			return (1);
		idx++;
	}
	return (0);
}

int	ft_strlen2(char *src, char *deli)
{
	int	idx;

	idx = 0;
	while (*(src + idx) && !is_it_deli(*(src + idx), deli))
		idx++;
	return (idx);
}

char	*ft_strdup(char *str, char *charset, int *total_idx)
{
	char	*ptr;
	int		idx;

	idx = 0;
	ptr = (char *)malloc(sizeof(char) * (ft_strlen2(str, charset) + 1));
	if (!ptr)
		return (0);
	while (!is_it_deli(*(str + idx), charset) && *(str + idx))
	{
		*(ptr + idx) = *(str + idx);
		(*total_idx)++;
		idx++;
	}
	*(ptr + idx) = '\0';
	while (is_it_deli(*(str + idx), charset))
	{
		(*total_idx)++;
		idx++;
	}
	return (ptr);
}

int	net_word_nbr(char *str, char *deli)
{
	int	word_count;
	int	idx;

	word_count = 0;
	if (!is_it_deli(str[0], deli))
		word_count++;
	idx = 1;
	while (str[idx])
	{
		if (is_it_deli(str[idx - 1], deli) && !(is_it_deli(str[idx], deli)))
			word_count++;
		idx++;
	}
	return (word_count);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		idx;
	int		word_count;
	int		total_idx;

	word_count = net_word_nbr(str, charset);
	result = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (NULL);
	idx = 0;
	total_idx = 0;
	while (is_it_deli(*(str + total_idx), charset))
		total_idx++;
	while (idx < word_count)
	{
		result[idx] = ft_strdup(str + total_idx, charset, &total_idx);
		idx++;
	}
	result[idx] = 0;
	return (result);
}
/*
#include	<stdio.h>
int	main(void)
{
	char	full_str[] = "abaabaa";
	char	set[] = "a";
	char	**test;
	
	test = ft_split(full_str, set);
	int idx;

	idx = 0;
	while (test[idx])
	{
		printf("idx : %d resutl : %s\n", idx, test[idx]);
		idx++;
	}
	printf("full text : %s \ndelimeter : %s\n", full_str, set);
}
*/
