/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 21:38:53 by bonkim            #+#    #+#             */
/*   Updated: 2022/04/26 23:14:04 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_word(char str);

char	*ft_strcapitalize(char *str)
{
	int	word;
	int	idx;

	if (is_word(str[0]) == 1)
		str[0] -= 32;
	idx = 1;
	while (str[idx])
	{
		word = is_word(str[idx]);
		if (word > 0)
		{
			if (is_word(str[idx - 1]) == 0 && word == 1)
				str[idx] -= 32;
			else if (is_word(str[idx - 1]) > 0 && word == 2)
				str[idx] += 32;
		}
		idx++;
	}
	return (str);
}

int	is_word(char str)
{
	if (str >= 'a' && str <= 'z')
		return (1);
	else if (str >= 'A' && str <= 'Z')
		return (2);
	else if ((str >= '0' && str <= '9') || str <= 31 || str == 127)
		return (3);
	else
		return (0);
}
