/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <bonkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 14:18:25 by bonkim            #+#    #+#             */
/*   Updated: 2022/07/29 19:26:08 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	index_s;
	size_t	index_d;
	size_t	dest_len;

	index_s = 0;
	dest_len = ft_strlen(dest);
	if (dest_len > size)
		return (ft_strlen(src) + size);
	index_d = dest_len;
	while (src[index_s] && dest_len + index_s + 1 < size)
	{
		dest[index_d] = src[index_s];
		index_d++;
		index_s++;
	}
	dest[index_d] = '\0';
	return (dest_len + ft_strlen(src));
}
