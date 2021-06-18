#include <stdio.h>
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	char only_lowercase[] = "ABCDJKFQWIOKLA";
	char *pointer_only_lowercase;
	char	special_chars[] = "ABC";
	char	*pointer_special_chars;
	pointer_only_lowercase = only_lowercase;
	pointer_special_chars = special_chars;
	printf("Testando string w uppercase: %d\n", 
	ft_str_is_uppercase(pointer_only_lowercase));
	printf("Testando caracteres especiais: %d\n",
		ft_str_is_uppercase(pointer_special_chars));
}
