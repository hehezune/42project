/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 09:38:47 by bonkim            #+#    #+#             */
/*   Updated: 2022/05/04 23:42:31 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_stock_str.h"
#include	<stdlib.h>

int	ft_strlen(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx])
		idx++;
	return (idx);
}

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		idx;

	ptr = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!ptr)
		return (0);
	idx = 0;
	while (*(src + idx))
	{
		*(ptr + idx) = *(src + idx);
		idx++;
	}
	*(ptr + idx) = '\0';
	return (ptr);
}

t_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*arr;
	int			idx;

	idx = 0;
	arr = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!arr)
		return (0);
	while (idx < ac)
	{
		arr[idx].str = av[idx];
		arr[idx].size = ft_strlen(av[idx]);
		arr[idx].copy = ft_strdup(av[idx]);
		if (!arr[idx].copy)
			return (0);
		idx++;
	}
	arr[idx].str = 0;
	return (arr);
}
/*
int	main(int argc, char **argv)
{
	t_stock_str *ptr;

	ptr = ft_strs_to_tab(argc, argv);
	ft_show_tab(t_stock_str ptr);
}
*/
