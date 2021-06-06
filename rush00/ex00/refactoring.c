#define TOP_LEFT '/'
#define TOP_RIGHT '\\'
#define TOP_AND_BOT_MID '*'
#define BOT_LEFT '\\'
#define BOT_RIGHT '/'
#define MID_LEFT_RIGHT '*'
#define MID_FILL ' '
void	ft_putchar(char	c);
void	put_pos(int	last_col, int	last_row, int	cur_col, int	cur_row);

void	rush(int	x, int	y)
{
	int	cur_col;
	int	cur_row;

	cur_row = 1;
	while (cur_row <= y)
	{
		cur_col = 1;
		while (cur_col <= x)
		{
			put_pos(x, y, cur_col, cur_row);
			cur_col++;
		}
		ft_putchar('\n');
		cur_row++;
	}
}

void	put_pos(int	last_col, int	last_row, int	cur_col, int	cur_row)
{
	if (cur_row == 1)
	{
		if (cur_col == 1)
			ft_putchar(TOP_LEFT);
		else if (cur_col == last_col)
			ft_putchar(TOP_RIGHT);
		else
			ft_putchar(TOP_AND_BOT_MID);
	}
	else if (cur_row == last_row)
	{
		if (cur_col == 1)
			ft_putchar(BOT_LEFT);
		else if (cur_col == last_col)
			ft_putchar(BOT_RIGHT);
		else
			ft_putchar(TOP_AND_BOT_MID);
	}
	else
	{
		if (cur_col == 1 || cur_col == last_col)
			ft_putchar(MID_LEFT_RIGHT);
		else
			ft_putchar(MID_FILL);
	}
}
