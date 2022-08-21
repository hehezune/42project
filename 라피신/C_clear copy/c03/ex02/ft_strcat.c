/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 19:39:09 by bonkim            #+#    #+#             */
/*   Updated: 2022/04/24 16:09:08 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	dst_idx;
	int	src_idx;

	dst_idx = 0;
	src_idx = 0;
	while (*(dest + dst_idx))
		dst_idx++;
	while (*(src + src_idx))
	{	
		*(dest + dst_idx) = *(src + src_idx);
		dst_idx++;
		src_idx++;
	}
	*(dest + dst_idx) = '\0';
	return (dest);
}
