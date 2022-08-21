/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 11:59:13 by bonkim            #+#    #+#             */
/*   Updated: 2022/04/27 14:08:31 by bonkim           ###   ########.fr       */
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

int	nbr_check(char str)
{
	if (str >= '0' && str <= '9')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	idx;
	int	result;
	int	sign;

	sign = 1;
	result = 0;
	idx = 0;
	while (space_check(str[idx]))
		idx++;
	while (sign_check(str[idx]) != 0)
	{
		sign *= sign_check(str[idx]);
		idx++;
	}
	while (nbr_check(str[idx]))
	{
		result = result * 10 + str[idx] - '0';
		idx++;
	}
	return (result * sign);
}
