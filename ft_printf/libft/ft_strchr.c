/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <bonkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 10:59:41 by bonkim            #+#    #+#             */
/*   Updated: 2022/08/27 14:10:17 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	idx;
	size_t	length;
	char	*str;

	str = (char *)s;
	idx = 0;
	length = ft_strlen(s);
	while (idx < length)
	{
		if (str[idx] == (unsigned char)c)
			return (str + idx);
		idx++;
	}
	if ((unsigned char)c == 0)
		return (str + idx);
	return (NULL);
}
