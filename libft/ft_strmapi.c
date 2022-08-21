/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <bonkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 20:30:06 by bonkim            #+#    #+#             */
/*   Updated: 2022/08/02 20:41:27 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	index;
	size_t			length;
	char			*arr;

	if (!s || !f)
		return (NULL);
	length = ft_strlen(s);
	arr = (char *)malloc(sizeof(char) * (length + 1));
	if (!arr)
		return (NULL);
	index = 0;
	while (index < length)
	{
		arr[index] = f(index, s[index]);
		index++;
	}
	arr[index] = '\0';
	return (arr);
}
