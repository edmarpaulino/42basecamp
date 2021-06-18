#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	left;
	char	right;

	left = 0;
	right = 1;
	while (left <= 99)
	{
		while (right <= 99)
		{
			if (right > left)
			{
				ft_putchar(left / 10 + '0');
				ft_putchar(left % 10 + '0');
				write (1, " ", 1);
				ft_putchar(right / 10 + '0');
				ft_putchar(right % 10 + '0');
				if (left != 98)
					write (1, ", ", 2);
			}
			right++;
		}
		right = 1;
		left++;
	}
}
