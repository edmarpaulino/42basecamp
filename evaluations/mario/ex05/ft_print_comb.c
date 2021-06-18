#include <unistd.h>
#include <stdio.h>
void	print_full_number (char x, char y, char z);

void	ft_print_comb (void)
{
	char	c;
	char	d;
	char	u;

	c = '0';
	while (c <= '9')
	{
		d = c + 1;
		while (d <= '9')
		{
			u = d + 1;
			while (u <= '9')
			{
				print_full_number (c, d, u);
				u++;
			}				
			d++;
		}
		c++;
	}
}

void	print_full_number (char x, char y, char z)
{
	if (y > x && z > y)
	{	
		write (1, &x, 1);
		write (1, &y, 1);
		write (1, &z, 1);
		if (x != '7')
		{						
			write (1, ", ", 2);
		}	
	}	
}

void	ft_print_comb(void);

int	main(void)
{
	ft_print_comb();
	return (0);
}
