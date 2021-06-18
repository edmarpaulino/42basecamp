#include <stdio.h>
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	char only_nbs[] = "012345671236781347529";
	char *pointer_only_nbs;
	char	special_chars[] = "0129837490";
	char	*pointer_special_chars;
	pointer_only_nbs = only_nbs;
	pointer_special_chars = special_chars;
	printf("Testando string w nbrs: %d\n", ft_str_is_numeric(pointer_only_nbs));
	printf("Testando caracteres especiais: %d\n",
		ft_str_is_numeric(pointer_special_chars));
}
