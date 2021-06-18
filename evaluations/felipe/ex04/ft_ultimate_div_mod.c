#include <unistd.h>

void	ft_ultimate_div_mod(int	*a, int	*b)
{
	int	memory[2];

	memory[0] = *a;
	memory[1] = *b;
	*a = memory[0] / memory[1];
	*b = memory[0] % memory[1];
}
