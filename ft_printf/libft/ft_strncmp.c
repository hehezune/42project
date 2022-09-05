/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <bonkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 11:01:08 by bonkim            #+#    #+#             */
/*   Updated: 2022/08/27 14:10:17 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*arr1;
	unsigned char	*arr2;
	size_t			idx;

	arr1 = (unsigned char *) s1;
	arr2 = (unsigned char *) s2;
	idx = 0;
	if (n == 0)
		return (0);
	while (arr1[idx] && arr1[idx] == arr2[idx])
	{
		if (idx == n - 1)
			break ;
		idx++;
	}
	return (arr1[idx] - arr2[idx]);
}
