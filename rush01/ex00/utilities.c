#include <unistd.h>
#include "board.h"
#include "check.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_valid_condition(char *cond)
{
	int	i;

	i = 0;
	while (*cond)
	{
		if (i % 2 == 0 && !(*cond - '0' >= 1 && *cond - '0' <= 4))
		{
			return (0);
		}
		else if (i % 2 == 1 && !(*cond == ' '))
		{
			return (0);
		}
		i++;
		cond++;
		if (i == 31)
		{
			return (1);
		}
	}
	return (1);
}

void	print_board(t_Board *board)
{
	int	r;
	int	c;

	r = 0;
	while (++r < 5)
	{
		c = 0;
		while (++c < 4)
		{
			ft_putchar('0' + board->board[r][c]);
			ft_putchar(' ');
		}
		ft_putchar('0' + board->board[r][c]);
		ft_putchar('\n');
	}
}

int	is_valid_board(t_Board *board)
{
	int	condition;

	condition = 0;
	while (condition < 16)
	{
		if (!is_valid_board_sub(board, condition))
		{
			return (0);
		}
		condition++;
	}
	return (1);
}
