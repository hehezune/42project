/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <bonkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 11:03:45 by bonkim            #+#    #+#             */
/*   Updated: 2022/08/02 21:39:38 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*arr;
	size_t			index;

	arr = (unsigned char *)s;
	index = 0;
	while (index < n)
	{
		if (arr[index] == (unsigned char) c)
			return (&arr[index]);
		index++;
	}
	return (NULL);
}
