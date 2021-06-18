#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	*tab_Opposite;
	int	tab_Swap;
	int	tab_Op_Ns;
	int	Array_Num;

	tab_Opposite = tab;
	Array_Num = size - 1;
	tab_Swap = 0;
	tab_Op_Ns = 0;
	while (Array_Num >= 0)
	{
		tab_Opposite[tab_Op_Ns] = tab[Array_Num];
		tab_Op_Ns++;
		Array_Num--;
	}
	while (tab_Swap < tab_Op_Ns)
	{
		tab[tab_Swap] = tab_Opposite[tab_Swap];
		tab_Swap++;
	}
}

int	main(void)
{
	int *tab;
	int counter;

	tab = calloc(10, sizeof(int));
	counter = 0;
	while (counter < 10)
	{
		tab[counter] = counter;
		counter++;
	}
	counter = 0;
	while (counter < 10)
	{
		printf("%d ", tab[counter]);
		counter++;
	}
	printf("\n");
	ft_rev_int_tab(tab, 10);
	counter = 0;
	while (counter < 10)
	{
		printf("%d ", tab[counter]);
		counter++;
	}
	printf("\n");
	return (0);
}
