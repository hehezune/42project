/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <bonkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 13:59:21 by bonkim            #+#    #+#             */
/*   Updated: 2022/05/04 13:59:23 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	idx;

	idx = 0;
	while (s1[idx] == s2[idx] && s1[idx] != '\0')
		idx++;
	return (s1[idx] - s2[idx]);
}
