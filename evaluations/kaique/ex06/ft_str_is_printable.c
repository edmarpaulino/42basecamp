#include <stdio.h>
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 127)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	char only_lowercase[] = "{}!@#%ABCDJKFQWIOKLA op 123 8943 ";
	char *pointer_only_lowercase;
	char	special_chars[] = "131sd23fasd";
	char	*pointer_special_chars;
	pointer_only_lowercase = only_lowercase;
	pointer_special_chars = special_chars;
	printf("Testando printable: %d\n", 
		ft_str_is_printable(pointer_only_lowercase));
	printf("Testando caracteres especiais: %d\n",
		ft_str_is_printable(pointer_special_chars));
}
