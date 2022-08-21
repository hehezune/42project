/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <bonkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 19:32:30 by bonkim            #+#    #+#             */
/*   Updated: 2022/08/03 15:36:31 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined_str;
	size_t	length;

	if (!s1 && !s2)
		return (ft_strdup(""));
	else if (!s2)
		return (ft_strdup(s1));
	else if (!s1)
		return (ft_strdup(s2));
	length = ft_strlen(s1) + ft_strlen(s2);
	joined_str = (char *)malloc(length + 1);
	if (!joined_str)
		return (NULL);
	length = ft_strlcpy(joined_str, s1, ft_strlen(s1) + 1);
	ft_strlcpy(joined_str + length, s2, ft_strlen(s2) + 1);
	return (joined_str);
}
