#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	atual;

	index = 0;
	atual = 0;
	while (index < (size / 2))
	{
		atual = tab[index];
		tab[index] = tab[(size - 1 - index)];
		tab[(size - 1 - index)] = atual;
		index ++;
	}
}
