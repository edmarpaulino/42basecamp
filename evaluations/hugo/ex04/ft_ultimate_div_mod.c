#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	divisao;

	divisao = *a / *b;
	*b = *a % *b;
	*a = divisao;
}
