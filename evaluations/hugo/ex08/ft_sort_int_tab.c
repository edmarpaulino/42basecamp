#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	atual;

	index = 0;
	atual = 0;
	while (index < (size - 1))
	{
		if (tab[index] > tab[index + 1])
		{
			atual = tab[index];
			tab[index] = tab[index + 1];
			tab[index + 1] = atual;
			index = 0;
		}
		else
			index ++;
	}
}
