#ifndef BOARD_H
# define BOARD_H

struct s_board
{
	int	board[4][4];
	int	r;
	int	c;
	int	chk_row[4][4];
	int	chk_col[4][4];
	int	condition[16];
};

typedef struct s_board	t_Board;

int		rush(char *conditions);
t_Board	*init(char *conditions);
void	read_conditions(t_Board *ptr_board, char *conditions);
int		fill_board(t_Board *board);
int		is_valid_board(t_Board *board);

#endif