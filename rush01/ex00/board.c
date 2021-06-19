#include <stdlib.h>
#include "utilities.h"
#include "board.h"
#include "check.h"

void	ft_putchar(char c);

int	fill_board_sub(t_Board *board)
{
	int	val;

	val = 0;
	while (++val < 5)
	{
		if (board->chk_row[board->r][val] || board->chk_col[board->c][val])
			continue ;
		board->chk_row[board->r][val] = 1;
		board->chk_col[board->c][val] = 1;
		board->board[board->r][board->c] = val;
		board->c++;
		if (fill_board(board))
			return (1);
		board->chk_row[board->r][val] = 0;
		board->chk_col[board->c][val] = 0;
	}
	return (0);
}

int	fill_board(t_Board *board)
{
	if (board->r == 5)
	{
		if (is_valid_board(board))
		{
			print_board(board);
			return (1);
		}
		return (0);
	}
	if (board->c == 5)
	{
		board->r += 1;
		return (fill_board(board));
	}
	else
	{
		return (fill_board_sub(board));
	}
}

t_Board	*init(char *conditions)
{
	int		i;
	int		j;
	t_Board	*board;

	board = (t_Board *) malloc(sizeof(t_Board));
	read_conditions(board, conditions);
	i = 0;
	while (++i < 5)
	{
		j = 0;
		while (++j < 5)
		{
			board->chk_row[i][j] = 0;
			board->chk_col[i][j] = 0;
		}
	}
	return (board);
}

void	read_conditions(t_Board *ptr_board, char *conditions)
{
	int	i;

	i = 0;
	while (*conditions)
	{
		if (i % 2)
		{
			ptr_board->condition[i / 2] = *conditions - '0';
		}
		i++;
		conditions++;
	}
	return ;
}

int	rush(char *conditions)
{
	t_Board	*board;

	board = init(conditions);
	return (fill_board(board));
}
