void	ft_putchar(char	c);
void	ft_print(int	x, int	y, int	tr, int	tc);

void	rush(int	x, int	y)
{
	int	row;
	int	col;

	row = 1;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			ft_print(x, y, col, row);
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}

void	ft_print(int	total_col, int	total_row, int	col, int	row)
{
	if (col == 1 || col == total_col)
	{
		if (row == 1 || row == total_row)
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('|');
		}
	}
	else
	{
		if (row == 1 || row == total_row)
		{
			ft_putchar('-');
		}
		else
		{
			ft_putchar(' ');
		}
	}
}
