#ifndef CHECK_H
# define CHECK_H
# include "board.h"
typedef struct s_board	t_Board;

int	is_valid_board_sub(t_Board *board, int condition_number);
int	check_row_left(t_Board *board, int row_X_left);
int	check_col_up(t_Board *board, int col_X_up);
int	check_row_right(t_Board *board, int row_X_right);
int	check_col_down(t_Board *board, int col_X_down);

#endif