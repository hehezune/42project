/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 20:24:59 by bonkim            #+#    #+#             */
/*   Updated: 2022/04/29 21:11:00 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	idx_s;
	unsigned int	idx_d;
	unsigned int	dest_len;

	idx_s = 0;
	idx_d = 0;
	while (*(dest + idx_d))
		idx_d++;
	dest_len = idx_d;
	while (*(src + idx_s) && dest_len + idx_s + 1 < size)
	{
		*(dest + idx_d) = *(src + idx_s);
		idx_d++;
		idx_s++;
	}
	*(dest + idx_d) = '\0';
	while (*(src + idx_s))
		idx_s++;
	if (dest_len > size)
		return (idx_s + size);
	else
		return (dest_len + idx_s);
}
