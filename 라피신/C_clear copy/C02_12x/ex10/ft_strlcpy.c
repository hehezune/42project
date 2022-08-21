/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 22:02:10 by bonkim            #+#    #+#             */
/*   Updated: 2022/04/26 23:15:18 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	idx;

	idx = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (*(src + idx) && idx < size - 1)
	{
		*(dest + idx) = *(src + idx);
		idx++;
	}
	*(dest + idx) = '\0';
	return (ft_strlen(src));
}

int	ft_strlen(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx])
		idx++;
	return (idx);
}
