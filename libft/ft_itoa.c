/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <bonkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 16:33:57 by bonkim            #+#    #+#             */
/*   Updated: 2022/08/02 21:26:25 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	count_size(int n)
{
	size_t			size;
	unsigned int	abs_n;

	size = 0;
	abs_n = n;
	if (n < 0)
	{
		size++;
		abs_n = -n;
	}
	else if (n == 0)
		size++;
	while (abs_n > 0)
	{
		abs_n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	size_t			digits;
	unsigned int	abs_n;
	char			*addr;

	digits = count_size(n);
	addr = (char *) malloc(sizeof(char) * (digits + 1));
	if (!addr)
		return (NULL);
	abs_n = n;
	if (n < 0)
		abs_n = -n;
	addr[digits] = '\0';
	while (digits > 0)
	{
		addr[--digits] = (abs_n % 10) + '0';
		abs_n /= 10;
	}
	if (n < 0)
		addr[0] = '-';
	return (addr);
}
