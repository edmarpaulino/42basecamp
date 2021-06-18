#include <unistd.h>
#include <limits.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	v[10];
	int		count;

	if (nb == 0)
		ft_putchar('0');
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb == -2147483648)
		write (1, "2147483648", 10);
	count = 0;
	while (nb > 0)
	{
		v[count] = ((nb % 10) + '0');
		nb = nb / 10;
		count++;
	}
	while (--count >= 0)
	{
		ft_putchar(v[count]);
	}
}

void	ft_putnbr(int nb);

int	main(void)
{
	write(1, "-1: ", 4);
	ft_putnbr(-1);
	write(1, "\n1: ", 4);
	ft_putnbr(1);
	write(1, "\n-10: ", 6);
	ft_putnbr(-10);
	write(1, "\n10: ", 5);
	ft_putnbr(10);
	write(1, "\nINT_MAX: ", 10);
	ft_putnbr(INT_MAX);
	write(1, "\nINT_MIN: ", 10);
	ft_putnbr(INT_MIN);
	write(1, "\n", 1);
	return (0);
}
