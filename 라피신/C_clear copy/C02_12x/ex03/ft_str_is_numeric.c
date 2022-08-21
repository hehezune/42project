/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:42:56 by bonkim            #+#    #+#             */
/*   Updated: 2022/04/25 18:55:55 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_numb(char *size);

int	ft_str_is_numeric(char *size)
{
	int	idx;

	idx = 0;
	while (*(size + idx))
	{
		if (!check_numb(size + idx))
			return (0);
		idx++;
	}
	return (1);
}

int	check_numb(char *size)
{
	if (*size >= '0' && *size <= '9')
		return (1);
	else
		return (0);
}
