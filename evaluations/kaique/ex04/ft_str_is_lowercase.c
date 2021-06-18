#include <stdio.h>
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	char only_lowercase[] = "abcdefgghhijklmopqrstuvswxyz";
	char *pointer_only_lowercase;
	char	special_chars[] = "abc";
	char	*pointer_special_chars;
	pointer_only_lowercase = only_lowercase;
	pointer_special_chars = special_chars;
	printf("Testando string w lowercase: %d\n", 
	ft_str_is_lowercase(pointer_only_lowercase));
	printf("Testando caracteres especiais: %d\n",
		ft_str_is_lowercase(pointer_special_chars));
}
