/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <bonkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 10:58:14 by bonkim            #+#    #+#             */
/*   Updated: 2022/07/22 16:19:57 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (ft_isascii(c))
	{
		if ((c >= 0 && c <= 31) || c == 127)
			return (0);
		else
			return (1);
	}
	else
		return (0);
}
