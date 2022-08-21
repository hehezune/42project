/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 19:02:56 by bonkim            #+#    #+#             */
/*   Updated: 2022/04/24 14:58:56 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_lowcase(char str);

int	ft_str_is_lowercase(char *str)
{
	int	idx;

	idx = 0;
	while (*(str + idx))
	{
		if (!check_lowcase(*(str + idx)))
			return (0);
		idx++;
	}
	return (1);
}

int	check_lowcase(char str)
{
	if (str >= 'a' && str <= 'z')
		return (1);
	else
		return (0);
}
