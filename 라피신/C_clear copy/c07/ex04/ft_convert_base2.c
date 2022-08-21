/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 17:25:36 by bonkim            #+#    #+#             */
/*   Updated: 2022/05/03 22:17:03 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	space_check(char str)
{
	if ((str >= 9 && str <= 13) || str == 32)
		return (1);
	else
		return (0);
}

int	sign_check(char str)
{
	if (str == '+')
		return (1);
	else if (str == '-')
		return (-1);
	else
		return (0);
}

int	base_idx(char str, char *base)
{
	int	idx;

	idx = 0;
	while (base[idx])
	{
		if (str == base[idx])
			return (idx);
		idx++;
	}
	return (-1);
}

int	ft_strlen(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx])
		idx++;
	return (idx);
}
