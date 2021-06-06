#include <stdlib.h>
void	rush(int	x, int	y);
void	ft_putchar(char	c);

int	main(int	argc, char	*argv[])
{
	int	row;
	int	col;

	if (argc != 3)
	{
		row = 5;
		col = 5;
	}
	else
	{
		row = atoi(argv[1]);
		col = atoi(argv[2]);
	}
	rush(col, row);
	return (0);
}
