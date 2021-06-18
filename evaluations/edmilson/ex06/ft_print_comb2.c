#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	printdigits(int n)
{
	if (n < 9)
	{
		ft_putchar('0');
		ft_putchar(n + '0');
	}
	else
	{
		ft_putchar((n / 10) + '0');
		ft_putchar((n % 10) + '0');
	}
}

void	ft_print_comb2(void)
{
	int	ten;
	int	unit;

	ten = 0;
	while (ten <= 99)
	{
		unit = ten + 1;
		while (unit <= 99)
		{
			printdigits(ten);
			ft_putchar(' ');
			printdigits(unit);
			if (ten < 98 || unit < 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}	
			unit++;
		}
		ten++;
	}
}
