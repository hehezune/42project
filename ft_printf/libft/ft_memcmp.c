/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <bonkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 11:05:29 by bonkim            #+#    #+#             */
/*   Updated: 2022/08/27 14:10:17 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_ptr;
	unsigned char	*s2_ptr;
	size_t			idx;

	if (n == 0)
		return (0);
	s1_ptr = (unsigned char *) s1;
	s2_ptr = (unsigned char *) s2;
	idx = 0;
	while (s1_ptr[idx] == s2_ptr[idx])
	{
		if (idx == n - 1)
			break ;
		idx++;
	}
	return (s1_ptr[idx] - s2_ptr[idx]);
}
