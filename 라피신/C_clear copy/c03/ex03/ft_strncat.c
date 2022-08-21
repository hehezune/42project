/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 19:50:16 by bonkim            #+#    #+#             */
/*   Updated: 2022/04/24 16:09:35 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	idx_s;
	int				idx_d;

	idx_s = 0;
	idx_d = 0;
	while (*(dest + idx_d))
		idx_d++;
	while (*(src + idx_s) && idx_s < nb)
	{
		*(dest + idx_d) = *(src + idx_s);
		idx_d++;
		idx_s++;
	}
	*(dest + idx_d) = '\0';
	return (dest);
}
