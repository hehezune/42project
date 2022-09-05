/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <bonkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 20:31:04 by bonkim            #+#    #+#             */
/*   Updated: 2022/08/21 20:20:26 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  error BUFFER_SIZE error
# else
#  if BUFFER_SIZE < 1
#   error BUFFER_SIZE error
#  endif
# endif

# include <stdlib.h>

char	*get_next_line(int fd);
long	gnl_strchr(char *s, int c);
char	*remain_save(char *save, int position);
char	*goto_save(char *save, char *buffer);
char	*print(char **save, long nl_index);

#endif
