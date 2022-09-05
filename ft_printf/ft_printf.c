/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <bonkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 17:32:48 by bonkim            #+#    #+#             */
/*   Updated: 2022/08/30 15:45:05 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	convert_str(va_list ap, char c, int result);
int	print_until_now(const char *str, va_list ap, size_t length, int result);

int	ft_printf(const char *input_str, ...)
{
	va_list	ap;
	size_t	index;
	size_t	start;
	int		result;

	index = 0;
	start = 0;
	result = 0;
	va_start(ap, input_str);
	while (input_str[index++])
	{
		if (input_str[index - 1] == '%')
		{
			result = print_until_now(
					input_str + start, ap, index - 1 - start, result);
			if (result == -1)
				return (-1);
			start = ++index;
		}
	}
	va_end(ap);
	return (error_check(result,
			write_str(ft_substr(input_str, start, index - start), result)));
}

int	print_until_now(const char *str, va_list ap, size_t length, int result)
{
	int	temp;

	temp = write_str(ft_substr(str, 0, length), result);
	if (temp == -1)
		return (-1);
	result += temp;
	temp = convert_str(ap, str[length + 1], result);
	if (temp == -1)
		return (-1);
	result += temp;
	return (result);
}

int	convert_str(va_list ap, char c, int result)
{
	if (c == 'c')
		return (print_c(ap, result));
	else if (c == 's')
		return (print_s(ap, result));
	else if (c == 'p')
		return (print_p(ap, result));
	else if (c == 'd')
		return (print_d(ap, result));
	else if (c == 'i')
		return (print_d(ap, result));
	else if (c == 'u')
		return (print_u(ap, result));
	else if (c == 'x')
		return (print_x(ap, result));
	else if (c == 'X')
		return (print_large_x(ap, result));
	else
		return (print_letter(c, result));
}

int	write_str(char *str, int result)
{
	size_t	length;

	if (!str)
		return (-1);
	length = ft_strlen(str);
	if (error_check(result, length) == -1)
	{
		free(str);
		return (-1);
	}
	write(1, str, length);
	free(str);
	return (length);
}

int	error_check(int result, int temp)
{
	if (temp == -1)
		return (-1);
	else if (result + temp < 0)
		return (-1);
	else
		return (result + temp);
}
