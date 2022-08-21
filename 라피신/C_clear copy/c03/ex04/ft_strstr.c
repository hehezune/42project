/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 20:06:56 by bonkim            #+#    #+#             */
/*   Updated: 2022/04/24 21:54:15 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	idx_std;
	int	idx_f;

	idx_std = 0;
	if (!to_find[0])
		return (str);
	while (str[idx_std])
	{
		if (str[idx_std] == to_find[0])
		{
			idx_f = 1;
			while ((str[idx_std + idx_f] == to_find[idx_f]) && to_find[idx_f])
				idx_f++;
			if (!to_find[idx_f])
				return (str + idx_std);
		}
		idx_std++;
	}
	return (0);
}
