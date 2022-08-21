/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:15:41 by bonkim            #+#    #+#             */
/*   Updated: 2022/04/25 20:17:31 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_alphabet(char *str);

int	ft_str_is_alpha(char *str)
{
	int	idx;

	idx = 0;
	while (*(str + idx))
	{
		if (!check_alphabet(str + idx))
			return (0);
		idx++;
	}
	return (1);
}

int	check_alphabet(char *str)
{
	if (*str >= 'a' && *str <= 'z')
		return (1);
	else if (*str >= 'A' && *str <= 'Z')
		return (1);
	else
		return (0);
}
