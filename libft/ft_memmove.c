/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <bonkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 11:05:59 by bonkim            #+#    #+#             */
/*   Updated: 2022/07/27 19:22:14 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_addr;
	unsigned char	*src_addr;
	size_t			index;

	if (!dst && !src)
		return (NULL);
	dst_addr = (unsigned char *)dst;
	src_addr = (unsigned char *)src;
	index = 0;
	if (dst_addr < src_addr)
	{
		while (index < len)
		{
			dst_addr[index] = src_addr[index];
			index++;
		}
	}
	else
		while (len-- > 0)
			dst_addr[len] = src_addr[len];
	return (dst_addr);
}
