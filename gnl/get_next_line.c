/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <bonkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 20:39:13 by bonkim            #+#    #+#             */
/*   Updated: 2022/08/21 21:13:20 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <unistd.h>

char	*get_next_line(int fd)
{
	static char	*save;
	ssize_t		length;
	char		buffer[BUFFER_SIZE + 1];

	if (save && gnl_strchr(save, '\n') != -1)
		return (print(&save, gnl_strchr(save, '\n')));
	length = read(fd, buffer, BUFFER_SIZE);
	while (length != -1 && length != 0)
	{
		buffer[length] = 0;
		save = goto_save(save, buffer);
		if (!save)
			return (NULL);
		if (gnl_strchr(save, '\n') != -1)
			return (print(&save, gnl_strchr(save, '\n')));
		length = read(fd, buffer, BUFFER_SIZE);
	}
	if (length != -1 && gnl_strchr(save, '\0') != 0)
		return (print(&save, gnl_strchr(save, '\n')));
	free(save);
	return (NULL);
}
