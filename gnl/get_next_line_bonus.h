/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <bonkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 20:31:04 by bonkim            #+#    #+#             */
/*   Updated: 2022/08/21 20:25:52 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  error BUFFER_SIZE error
# else
#  if BUFFER_SIZE < 1
#   error BUFFER_SIZE error
#  endif
# endif

# include <stdlib.h>

typedef struct s_list
{
	char			*save;
	int				fd;
	struct s_list	*next;
}	t_list;

char	*get_next_line(int fd);
long	gnl_strchr(char *s, int c);
char	*remain_save(char *save, int position);
char	*goto_save(char *save, char *buffer);
char	*print(char **save, long nl_index);
t_list	*find_node(t_list **list, int fd);
t_list	*new_node(int fd);
void	node_free(t_list **list, int fd);

#endif
