/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:47:35 by bonkim            #+#    #+#             */
/*   Updated: 2022/04/25 20:44:41 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_lowcase(char str);

char	*ft_strlowcase(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx])
	{
		if (is_lowcase(*(str + idx)))
			str[idx] += 32;
		idx++;
	}
	return (str);
}

int	is_lowcase(char str)
{	
	if (str >= 'A' && str <= 'Z')
		return (1);
	return (0);
}
