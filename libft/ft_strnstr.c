/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <bonkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 11:08:28 by bonkim            #+#    #+#             */
/*   Updated: 2022/08/03 15:44:30 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h_idx;
	size_t	n_idx;
	size_t	n_length;

	n_length = 0;
	h_idx = 0;
	if (!ft_strlen(needle))
		return ((char *)haystack);
	n_length = ft_strlen(needle);
	while (haystack[h_idx] && h_idx < len)
	{
		n_idx = 0;
		while (haystack[h_idx + n_idx] == needle[n_idx] && needle[n_idx])
			n_idx++;
		if (n_idx == n_length && h_idx + n_idx <= len)
			return ((char *)haystack + h_idx);
		h_idx++;
	}
	return (NULL);
}
