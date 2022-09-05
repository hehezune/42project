/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <bonkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 11:11:15 by bonkim            #+#    #+#             */
/*   Updated: 2022/08/27 14:10:17 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	sign_calculation(char sign, int *sign_flag)
{
	if (sign == '+')
	{
		(*sign_flag)++;
		return (1);
	}
	else
	{
		(*sign_flag)++;
		return (-1);
	}
}

static	int	space_check(char cha)
{
	if ((cha >= 9 && cha <= 13) || cha == 32)
		return (1);
	else
		return (0);
}

int	ft_atoi(const	char *str)
{
	int	idx;
	int	result;
	int	number_start;
	int	sign;

	sign = 1;
	number_start = 0;
	result = 0;
	idx = 0;
	while (str[idx])
	{
		if (space_check(str[idx]) && !number_start)
			;
		else if (!number_start && (str[idx] == '+' || str[idx] == '-'))
			sign = sign_calculation(str[idx], &number_start);
		else if (str[idx] >= 48 && str[idx] <= 57)
		{
			result = result * 10 + str[idx] - '0';
			number_start++;
		}
		else
			break ;
		idx++;
	}
	return (result * sign);
}
