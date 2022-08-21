/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <bonkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 11:04:06 by bonkim            #+#    #+#             */
/*   Updated: 2022/08/02 21:42:13 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_addr;
	unsigned char	*src_addr;
	size_t			index;

	if (!dst && !src)
		return (NULL);
	index = 0;
	dst_addr = (unsigned char *)dst;
	src_addr = (unsigned char *)src;
	while (index < n)
	{
		dst_addr[index] = src_addr[index];
		index++;
	}
	return (dst);
}
