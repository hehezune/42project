/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <bonkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 11:11:15 by bonkim            #+#    #+#             */
/*   Updated: 2022/08/01 13:19:14 by bonkim           ###   ########.fr       */
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
	int	index;
	int	result;
	int	number_start;
	int	sign;

	sign = 1;
	number_start = 0;
	result = 0;
	index = 0;
	while (str[index])
	{
		if (space_check(str[index]) && !number_start)
			;
		else if (!number_start && (str[index] == '+' || str[index] == '-'))
			sign = sign_calculation(str[index], &number_start);
		else if (str[index] >= 48 && str[index] <= 57)
		{
			result = result * 10 + str[index] - '0';
			number_start++;
		}
		else
			break ;
		index++;
	}
	return (result * sign);
}
