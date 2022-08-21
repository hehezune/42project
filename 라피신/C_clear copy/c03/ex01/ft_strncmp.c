/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 19:09:38 by bonkim            #+#    #+#             */
/*   Updated: 2022/04/25 11:23:32 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	idx;

	idx = 0;
	if (n == 0)
		return (0);
	while (s1[idx] == s2[idx] && s1[idx])
	{
		if (idx == n - 1)
			break ;
		idx++;
	}
	return (s1[idx] - s2[idx]);
}
