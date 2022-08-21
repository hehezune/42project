/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <bonkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 11:01:08 by bonkim            #+#    #+#             */
/*   Updated: 2022/08/03 15:41:51 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*arr1;
	unsigned char	*arr2;
	size_t			index;

	arr1 = (unsigned char *) s1;
	arr2 = (unsigned char *) s2;
	index = 0;
	if (n == 0)
		return (0);
	while (arr1[index] && arr1[index] == arr2[index])
	{
		if (index == n - 1)
			break ;
		index++;
	}
	return (arr1[index] - arr2[index]);
}
