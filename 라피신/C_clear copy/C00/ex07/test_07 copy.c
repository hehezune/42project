/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_07.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 16:21:09 by bonkim            #+#    #+#             */
/*   Updated: 2022/04/20 19:46:08 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include	"ft_putnbr.c"

void ft_putnbr(int nb);

int main(void)
{
	int numb;
	scanf("%d", &numb);
	ft_putnbr(numb);
}
