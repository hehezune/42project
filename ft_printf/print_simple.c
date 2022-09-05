/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_simple.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <bonkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 19:28:01 by bonkim            #+#    #+#             */
/*   Updated: 2022/08/30 15:26:15 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	print_c(va_list ap, int result)
{
	char	word;

	word = va_arg(ap, int);
	if (error_check(result, 1) == -1)
		return (-1);
	write(1, &word, 1);
	return (1);
}

int	print_s(va_list ap, int result)
{
	char	*new_str;
	char	*input;
	int		length;

	input = va_arg(ap, char *);
	if (!input)
		new_str = ft_strdup("(null)");
	else
		new_str = ft_strdup(input);
	if (!new_str)
		return (-1);
	length = write_str(new_str, result);
	return (length);
}

int	print_d(va_list ap, int result)
{
	char	*new_str;
	int		number;
	int		length;

	number = va_arg(ap, int);
	new_str = ft_itoa(number);
	if (!new_str)
		return (-1);
	length = write_str(new_str, result);
	return (length);
}

int	print_u(va_list ap, int result)
{
	unsigned int	number;
	char			*new_str;
	int				length;

	number = va_arg(ap, int);
	new_str = ft_unsigned_itoa(number);
	if (!new_str)
		return (-1);
	length = write_str(new_str, result);
	return (length);
}

int	print_letter(char letter, int result)
{
	if (error_check(result, 1) == -1)
		return (-1);
	write(1, &letter, 1);
	return (1);
}
