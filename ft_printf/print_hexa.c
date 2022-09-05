/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <bonkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 13:46:19 by bonkim            #+#    #+#             */
/*   Updated: 2022/08/30 15:32:30 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include <stdlib.h>

char	*convert_addr(unsigned long number);
char	*convert_hexa(unsigned int number, char upper);

int	print_x(va_list ap, int result)
{
	unsigned int	number;
	char			*new_str;
	int				length;

	number = va_arg(ap, int);
	new_str = convert_hexa(number, 'a');
	if (!new_str)
		return (-1);
	length = write_str(new_str, result);
	return (length);
}

int	print_large_x(va_list ap, int result)
{
	unsigned int	number;
	char			*new_str;
	int				length;

	number = va_arg(ap, int);
	new_str = convert_hexa(number, 'A');
	if (!new_str)
		return (-1);
	length = write_str(new_str, result);
	return (length);
}

int	print_p(va_list ap, int result)
{
	char			*new_str;
	unsigned long	number;
	int				length;

	number = va_arg(ap, unsigned long);
	new_str = convert_addr(number);
	if (!new_str)
		return (-1);
	length = write_str(new_str, result);
	return (length);
}

char	*convert_addr(unsigned long number)
{
	char	*new_str;
	size_t	size;

	size = count_size_hexa(number) + 2;
	new_str = (char *)malloc(size + 1);
	if (!new_str)
		return (NULL);
	new_str[size] = '\0';
	while (size-- > 2)
	{
		new_str[size] = "0123456789abcdef"[number % 16];
		number /= 16;
	}
	new_str[1] = 'x';
	new_str[0] = '0';
	return (new_str);
}

char	*convert_hexa(unsigned int number, char lower_case)
{
	char	*new_str;
	size_t	size;

	size = count_size_hexa(number);
	new_str = (char *)malloc(size + 1);
	if (!new_str)
		return (NULL);
	new_str[size] = '\0';
	if (lower_case == 'a')
	{
		while (size-- > 0)
		{
			new_str[size] = "0123456789abcdef"[number % 16];
			number /= 16;
		}
	}
	else
	{
		while (size-- > 0)
		{
			new_str[size] = "0123456789ABCDEF"[number % 16];
			number /= 16;
		}
	}
	return (new_str);
}
