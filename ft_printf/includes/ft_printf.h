/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <bonkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 19:51:46 by bonkim            #+#    #+#             */
/*   Updated: 2022/08/30 15:17:31 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>

int		ft_printf(const char *input_str, ...);
int		write_str(char *str, int result);
int		print_c(va_list ap, int result);
int		print_s(va_list ap, int result);
int		print_d(va_list ap, int result);
int		print_u(va_list ap, int result);
int		print_p(va_list ap, int result);
int		print_large_x(va_list ap, int result);
int		print_x(va_list ap, int result);
int		print_letter(char letter, int result);
int		error_check(int result, int temp);
size_t	count_size(unsigned int n);
size_t	count_size_hexa(unsigned long n);
char	*ft_unsigned_itoa(unsigned int n);
#endif
