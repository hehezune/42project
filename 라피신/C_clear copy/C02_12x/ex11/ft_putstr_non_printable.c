/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 12:08:54 by bonkim            #+#    #+#             */
/*   Updated: 2022/04/26 23:07:35 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	hexprint(unsigned char str);

void	ft_putstr_non_printable(char *str)
{
	unsigned char	ustr;
	int				idx;

	idx = 0;
	while (*str)
	{
		ustr = *str;
		if (ustr >= 32 && ustr <= 126)
			write(1, &ustr, 1);
		else
		{
			write(1, "\\", 1);
			hexprint(ustr);
		}
		str++;
	}
}

void	hexprint(unsigned char str)
{
	write(1, &"0123456789abcdef"[str / 16], 1);
	write(1, &"0123456789abcdef"[str % 16], 1);
}
