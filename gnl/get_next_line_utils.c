/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <bonkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 19:30:42 by bonkim            #+#    #+#             */
/*   Updated: 2022/08/21 20:23:18 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

long	gnl_strchr(char *str, int c)
{
	size_t	index;

	if (!str)
		return (0);
	index = 0;
	while (str[index])
	{
		if (str[index] == (unsigned char)c)
			return (index);
		index++;
	}
	if ((unsigned char)c == 0)
		return (index);
	return (-1);
}

char	*goto_save(char *save, char *buffer)
{
	const long	save_length = gnl_strchr(save, '\0');
	const long	buffer_length = gnl_strchr(buffer, '\0');
	char		*new_save;
	long		index;

	index = 0;
	new_save = (char *)malloc(save_length + buffer_length + 1);
	if (!new_save)
		return (NULL);
	while (index++ < save_length)
		new_save[index - 1] = (save)[index - 1];
	free(save);
	index = 0;
	while (index++ < buffer_length)
		new_save[index - 1 + save_length] = buffer[index - 1];
	new_save[index - 1 + save_length] = '\0';
	return (new_save);
}

char	*print(char **save, long nl_index)
{
	char	*print_str;
	char	*temp;
	long	index;
	long	length;

	length = nl_index + 1;
	if (length == 0)
		length = gnl_strchr(*save, '\0');
	print_str = (char *)malloc(length + 1);
	if (!print_str)
		return (NULL);
	index = 0;
	while (index++ < length)
		print_str[index - 1] = (*save)[index - 1];
	print_str[index - 1] = '\0';
	temp = *save;
	if (nl_index != -1 && gnl_strchr(*save, '\0') - nl_index != 1)
		*save = remain_save(*save, length);
	else
		*save = NULL;
	free(temp);
	return (print_str);
}

char	*remain_save(char *save, int forward_length)
{
	size_t	index;
	size_t	save_length;
	char	*new_save;

	save_length = gnl_strchr(save, '\0');
	new_save = (char *)malloc(save_length - forward_length + 1);
	if (!new_save)
		return (NULL);
	index = 0;
	while (index++ < save_length - forward_length)
		new_save[index - 1] = save[index - 1 + forward_length];
	new_save[index - 1] = '\0';
	return (new_save);
}
