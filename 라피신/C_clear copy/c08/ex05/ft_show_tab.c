/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <bonkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 19:31:07 by bonkim            #+#    #+#             */
/*   Updated: 2022/05/04 23:42:25 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"ft_stock_str.h"
#include	<unistd.h>

void	ft_putchar(char str)
{
	write(1, &str, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putchar(nbr % 10 + '0');
	}
	else
		ft_putchar(nbr % 10 + '0');
}

void	ft_putstr(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx])
	{
		ft_putchar(str[idx]);
		idx++;
	}
}

void	ft_show_tab(t_stock_str *par)
{
	int		idx;

	idx = 0;
	while (par[idx].str)
	{
		ft_putstr(par[idx].str);
		write(1, "\n", 1);
		ft_putnbr(par[idx].size);
		write(1, "\n", 1);
		ft_putstr(par[idx].copy);
		write(1, "\n", 1);
		idx++;
	}
}
