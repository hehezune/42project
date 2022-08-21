/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 11:57:52 by bonkim            #+#    #+#             */
/*   Updated: 2022/04/24 10:24:52 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b);

void	ft_sort_int_tab(int *tab, int size)
{
	int	idx;
	int	std_idx;

	std_idx = 0;
	while (std_idx < size)
	{
		idx = std_idx + 1;
		while (idx < size)
		{
			if (tab[std_idx] > tab[idx])
				ft_swap(&tab[std_idx], &tab[idx]);
			idx++;
		}
		std_idx++;
	}
}	

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
