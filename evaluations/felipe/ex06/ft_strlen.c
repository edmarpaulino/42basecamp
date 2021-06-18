#include <unistd.h>

int	ft_strlen(char	*str)
{
	int	array_Check;
	int	n_de_letras;

	n_de_letras = 0;
	array_Check = 0;
	while (str[array_Check] != '\0')
	{
		n_de_letras++;
		array_Check++;
	}
	return (n_de_letras);
}
