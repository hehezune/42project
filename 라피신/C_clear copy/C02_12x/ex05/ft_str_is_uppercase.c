/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:13:32 by bonkim            #+#    #+#             */
/*   Updated: 2022/04/21 11:34:08 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_upper(char str);

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!check_upper(*str))
			return (0);
		str++;
	}
	return (1);
}

int	check_upper(char str)
{
	if (str >= 'A' && str <= 'Z')
		return (1);
	else
		return (0);
}
