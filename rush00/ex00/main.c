#include <unistd.h>
void	rush	(int	x, int	y);
int		convert	(char	*parameter);

int	main(int	argc, char	*argv[])
{
	int	col;
	int	row;

	col = 0;
	row = 0;
	if (argc != 3)
	{
		write(2, "Error! The number of parameters are different from 2.\n", 54);
	}
	else
	{
		col = convert(argv[1]);
		row = convert(argv[2]);
	}
	if (col == 0 || row == 0)
	{
		return (1);
	}
	else
	{
		rush(col, row);
	}
	return (0);
}

int	convert(char	*parameter)
{
	int	i;
	int	converted_num;

	i = 0;
	converted_num = 0;
	while (parameter[i] != '\0')
	{
		if (parameter[i] < '0' || parameter[i] > '9')
		{
			return (0);
		}
		else
		{
			converted_num = (converted_num * 10) + (parameter[i] - '0');
			i++;
		}
	}
	return (converted_num);
}
