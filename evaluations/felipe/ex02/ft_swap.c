#include <unistd.h>

void	ft_swap(int	*a, int	*b)
{
	int	memory[2];

	memory[0] = *a;
	memory[1] = *b;
	*a = memory[1];
	*b = memory[0];
}
