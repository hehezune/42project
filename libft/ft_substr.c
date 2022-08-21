/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <bonkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 15:13:22 by bonkim            #+#    #+#             */
/*   Updated: 2022/08/04 19:19:33 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	index;
	char	*sub_str;

	if (!len || !s || start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	sub_str = (char *) malloc (sizeof(char) * (len + 1));
	if (!sub_str)
		return (NULL);
	index = 0;
	while (index < len)
	{
		sub_str[index] = s[index + start];
		index++;
	}
	sub_str[index] = 0;
	return (sub_str);
}
