#include <stdio.h>
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	char only_chars[] = "ABCDEFGHIJKLMNOPQRSTUVXWYZabcdefijklmnopqrstuvxwyz";
	char *pointer_only_chars;
	char	special_chars[] = "ABCabc";
	char	*pointer_special_chars;
	pointer_only_chars = only_chars;
	pointer_special_chars = special_chars;
	printf("Testando string letras: %d\n", ft_str_is_alpha(pointer_only_chars));
printf("Testando caracteres especiais: %d\n", 
ft_str_is_alpha(pointer_special_chars));
}
