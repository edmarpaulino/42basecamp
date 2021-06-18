#include <stdio.h>
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	swap;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				swap = tab[i];
				tab[i] = tab[j];
				tab[j] = swap;
			}
			j++;
		}
		i++;
	}
}

void    ft_sort_int_tab(int *tab, int size);

int        main(void)
{
    //               0    1    2    3    4    5    6    7    8    9
    int    vector[] = {83, 86, 77, 15, 93, 35, 86, 92, 49, 21};
    int index = 0;
    ft_sort_int_tab(vector, 10);
    while(index < 10)
    {
        printf("%d ", vector[index]);
        index++;
    }
    return(0);
}