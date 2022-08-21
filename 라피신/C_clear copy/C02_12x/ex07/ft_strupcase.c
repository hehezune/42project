/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:43:35 by bonkim            #+#    #+#             */
/*   Updated: 2022/04/25 20:43:06 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	check_lowcase_ex07(char str);

char	*ft_strupcase(char *str)
{
	int	idx;

	idx = 0;
	while (*(str + idx))
	{
		if (check_lowcase_ex07(*(str + idx)))
			*(str + idx) -= 32;
		idx++;
	}
	return (str);
}

int	check_lowcase_ex07(char str)
{
	if (str >= 'a' && str <= 'z')
		return (1);
	return (0);
}
