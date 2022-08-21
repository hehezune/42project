/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <bonkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 10:59:41 by bonkim            #+#    #+#             */
/*   Updated: 2022/08/04 14:00:48 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	index;
	size_t	length;
	char	*str;

	str = (char *)s;
	index = 0;
	length = ft_strlen(s);
	while (index < length)
	{
		if (str[index] == (unsigned char)c)
			return (str + index);
		index++;
	}
	if ((unsigned char)c == 0)
		return (str + index);
	return (NULL);
}
