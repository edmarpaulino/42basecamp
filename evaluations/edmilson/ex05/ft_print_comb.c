#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	hundred;
	char	ten;
	char	unit;

	hundred = '0';
	while (hundred <= '7')
	{
		ten = hundred + 1;
		while (ten <= '8')
		{
			unit = ten + 1;
			while (unit <= '9')
			{
				write(1, &hundred, 1);
				write(1, &ten, 1);
				write(1, &unit, 1);
				if (unit < '9' || ten < '8' || hundred < '7')
					write(1, ", ", 2);
				unit++;
			}
			ten++;
		}
		hundred++;
	}
}
