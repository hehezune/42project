/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <bonkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 14:18:25 by bonkim            #+#    #+#             */
/*   Updated: 2022/08/27 14:10:17 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	idx_s;
	size_t	idx_d;
	size_t	dest_len;

	idx_s = 0;
	dest_len = ft_strlen(dest);
	if (dest_len > size)
		return (ft_strlen(src) + size);
	idx_d = dest_len;
	while (src[idx_s] && dest_len + idx_s + 1 < size)
	{
		dest[idx_d] = src[idx_s];
		idx_d++;
		idx_s++;
	}
	dest[idx_d] = '\0';
	return (dest_len + ft_strlen(src));
}
