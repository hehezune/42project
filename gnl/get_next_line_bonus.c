/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <bonkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 20:39:13 by bonkim            #+#    #+#             */
/*   Updated: 2022/08/21 21:35:26 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include <unistd.h>

char	*get_next_line(int fd)
{
	static t_list	*save_list = NULL;
	t_list			*node;
	ssize_t			length;
	char			buffer[BUFFER_SIZE + 1];

	node = find_node(&save_list, fd);
	if (node->save && gnl_strchr(node->save, '\n') != -1)
		return (print(&(node->save), gnl_strchr(node->save, '\n')));
	length = read(fd, buffer, BUFFER_SIZE);
	while (length != -1 && length != 0)
	{
		buffer[length] = 0;
		node->save = goto_save(node->save, buffer);
		if (!(node->save))
			return (NULL);
		if (gnl_strchr(node->save, '\n') != -1)
			return (print(&(node->save), gnl_strchr(node->save, '\n')));
		length = read(fd, buffer, BUFFER_SIZE);
	}
	if (length != -1 && gnl_strchr(node->save, '\0') != 0)
		return (print(&(node->save), gnl_strchr(node->save, '\n')));
	free(node->save);
	node_free(&save_list, fd);
	return (NULL);
}

t_list	*find_node(t_list **list, int fd)
{
	t_list	*current;

	current = *list;
	if (!current)
	{
		*list = new_node(fd);
		return (*list);
	}
	if (current->fd == fd)
		return (current);
	while (current->next)
	{
		current = current->next;
		if (current->fd == fd)
			return (current);
	}
	current->next = new_node(fd);
	return (current->next);
}

t_list	*new_node(int fd)
{
	t_list	*new_list;

	new_list = (t_list *)malloc(sizeof(t_list));
	if (!new_list)
		return (NULL);
	new_list->save = NULL;
	new_list->fd = fd;
	new_list->next = NULL;
	return (new_list);
}

void	node_free(t_list **list, int fd)
{
	t_list	*current;
	t_list	*temp;

	current = *list;
	if (!list)
		return ;
	if (current->fd == fd)
	{
		temp = current;
		*list = current->next;
		free(temp);
		return ;
	}
	while (current->next)
	{
		if (current->next->fd == fd)
		{
			temp = current->next;
			current->next = temp->next;
			free(temp);
			return ;
		}
		current = current->next;
	}
}
