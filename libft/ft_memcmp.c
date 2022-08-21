/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <bonkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 11:05:29 by bonkim            #+#    #+#             */
/*   Updated: 2022/07/29 18:01:18 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_ptr;
	unsigned char	*s2_ptr;
	size_t			index;

	if (n == 0)
		return (0);
	s1_ptr = (unsigned char *) s1;
	s2_ptr = (unsigned char *) s2;
	index = 0;
	while (s1_ptr[index] == s2_ptr[index])
	{
		if (index == n - 1)
			break ;
		index++;
	}
	return (s1_ptr[index] - s2_ptr[index]);
}
