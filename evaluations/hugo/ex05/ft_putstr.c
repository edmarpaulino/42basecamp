#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	contador;

	contador = 0;
	while (str[contador] != '\0')
	{
		ft_putchar(str[contador]);
		contador ++;
	}
}

int main(void)
{
	ft_putstr("Hello World");
	return (0);
}
