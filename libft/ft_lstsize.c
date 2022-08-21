/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <bonkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 14:31:15 by bonkim            #+#    #+#             */
/*   Updated: 2022/08/05 16:54:44 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*current;
	size_t	index;

	index = 0;
	current = lst;
	while (current)
	{
		index++;
		current = current->next;
	}
	return (index);
}
