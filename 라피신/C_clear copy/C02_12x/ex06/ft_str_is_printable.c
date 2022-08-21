/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstr_is_printable.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:38:24 by bonkim            #+#    #+#             */
/*   Updated: 2022/04/25 18:57:07 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_printable(char str);

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!check_printable(*str))
			return (0);
		str++;
	}
	return (1);
}

int	check_printable(char str)
{
	if (str < 32 || str == 127)
		return (0);
	return (1);
}
