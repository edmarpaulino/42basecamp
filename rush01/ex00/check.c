#include "check.h"

int	is_valid_board_sub(t_Board *board, int condition_number)
{
	if (condition_number / 4 == 0)
	{
		return (check_col_up(board, condition_number % 4));
	}
	if (condition_number / 4 == 1)
	{
		return (check_col_down(board, condition_number % 4));
	}
	if (condition_number / 4 == 2)
	{
		return (check_row_left(board, condition_number % 4));
	}
	if (condition_number / 4 == 3)
	{
		return (check_row_right(board, condition_number % 4));
	}
	return (0);
}

int	check_row_left(t_Board *board, int row_X_left)
{
	int	i;
	int	count;
	int	max_height;

	i = 0;
	count = 0;
	max_height = 0;
	while (++i < 4)
	{
		if (board->board[row_X_left][i] > max_height)
		{
			max_height = board->board[row_X_left][i];
			count++;
		}
	}
	return (count == board->condition[8 + row_X_left]);
}

int	check_col_up(t_Board *board, int col_X_up)
{
	int	i;
	int	count;
	int	max_height;

	i = 0;
	count = 0;
	max_height = 0;
	while (++i < 4)
	{
		if (board->board[i][col_X_up] > max_height)
		{
			max_height = board->board[i][col_X_up];
			count++;
		}
	}
	return (count == board->condition[col_X_up]);
}

int	check_row_right(t_Board *board, int row_X_right)
{
	int	i;
	int	count;
	int	max_height;

	i = 4;
	count = 0;
	max_height = 0;
	while (--i >= 0)
	{
		if (board->board[row_X_right][i] > max_height)
		{
			max_height = board->board[row_X_right][i];
			count++;
		}
	}
	return (count == board->condition[row_X_right + 12]);
}

int	check_col_down(t_Board *board, int col_X_down)
{
	int	i;
	int	count;
	int	max_height;

	i = 4;
	count = 0;
	max_height = 0;
	while (--i >= 0)
	{
		if (board->board[i][col_X_down] > max_height)
		{
			max_height = board->board[i][col_X_down];
			count++;
		}
	}
	return (count == board->condition[col_X_down + 4]);
}
