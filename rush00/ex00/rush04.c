void	ft_putchar(char	c);
void	ft_edge(int	total_col, int	total_row, int	col, int	row);
void	ft_bars(int	total_col, int	total_row, int	col, int	row);

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
			ft_edge(x, y, col, row);
			ft_bars(x, y, col, row);
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}

void	ft_edge(int	total_col, int	total_row, int	col, int	row)
{
	if (row == 1 && col == 1)
	{
		ft_putchar('A');
	}
	else if (row == 1 && col == total_col)
	{
		ft_putchar('C');
	}
	else if (row == total_row && col == 1)
	{
		ft_putchar('C');
	}
	else if (row == total_row && col == total_col)
	{
		ft_putchar('A');
	}
}

void	ft_bars(int	total_col, int	total_row, int	col, int	row)
{
	if (row == 1 && col != 1 && col != total_col)
	{
		ft_putchar('B');
	}
	else if (col == 1 && row != 1 && row != total_row)
	{
		ft_putchar('B');
	}
	else if (col == total_col && row != 1 && row != total_row)
	{
		ft_putchar('B');
	}
	else if (row == total_row && col != 1 && col != total_col)
	{
		ft_putchar('B');
	}
	else if (col != 1 && col != total_col && row != 1 && row != total_row)
	{
		ft_putchar(' ');
	}
}
