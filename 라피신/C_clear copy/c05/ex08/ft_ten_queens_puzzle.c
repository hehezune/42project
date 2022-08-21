/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 15:35:20 by bonkim            #+#    #+#             */
/*   Updated: 2022/05/01 13:54:01 by bonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<unistd.h>

int	check(int *board, int x)
{
	int	idx;

	idx = 0;
	while (idx < x)
	{
		if (board[x] == board[idx])
			return (0);
		if (board[x] + x == idx + board[idx])
			return (0);
		if (board[x] - x == board[idx] - idx)
			return (0);
		idx++;
	}
	return (1);
}

void	pt_board(int *board)
{
	int		idx;
	char	nbr;

	idx = 0;
	while (idx < 10)
	{
		nbr = board[idx] + '0';
		write(1, &nbr, 1);
		idx++;
	}
	write(1, "\n", 1);
}

int	nqueen(int *board, int x, int n)
{
	int	result;

	if (x == n)
	{
		pt_board(board);
		return (1);
	}
	result = 0;
	while (board[x] < 10)
	{
		if (check(board, x))
			result += nqueen(board, x + 1, n);
		board[x]++;
	}
	board[x] = 0;
	return (result);
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10];
	int	result;
	int	idx;

	result = 0;
	idx = 0;
	while (idx < 10)
	{
		board[idx] = 0;
		idx++;
	}
	idx = 0;
	result = nqueen(board, 0, 10);
	return (result);
}
/*
#include	<stdio.h>

int	main(void)
{
	printf("%d",	ft_ten_queens_puzzle());
}
*/
