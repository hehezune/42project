/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <bonkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 14:14:37 by bonkim            #+#    #+#             */
/*   Updated: 2022/08/29 19:32:17 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	count_size(unsigned int n)
{
	size_t	size;

	size = 0;
	if (n == 0)
		size++;
	while (n > 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

size_t	count_size_hexa(unsigned long n)
{
	size_t	size;

	size = 0;
	if (n == 0)
		size++;
	while (n > 0)
	{
		n /= 16;
		size++;
	}
	return (size);
}

char	*ft_unsigned_itoa(unsigned int n)
{
	size_t	digits;
	char	*addr;

	digits = count_size(n);
	addr = (char *)malloc(sizeof(char) * (digits + 1));
	if (!addr)
		return (NULL);
	addr[digits] = '\0';
	while (digits > 0)
	{
		addr[--digits] = (n % 10) + '0';
		n /= 10;
	}
	return (addr);
}
