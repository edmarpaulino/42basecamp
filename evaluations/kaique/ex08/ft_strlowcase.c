#include <stdio.h>
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char lowercase[] = "abcdefghiJklmn234{!opqrstuvwxyz";
	char *pointer_lwr;
	pointer_lwr = lowercase;
	char lower_and_uppercase[] = 
	"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *pointer_all;
	pointer_all = lower_and_uppercase;

	char empty[] = "";
	char *pointer_emp;
	pointer_emp = empty;

	printf("String antes da função: %s \n", lowercase);
	printf("String antes da função: %s \n", lower_and_uppercase);
	printf("String antes da função: %s \n", empty);
	ft_strlowcase(pointer_lwr);
	ft_strlowcase(pointer_all);
	ft_strlowcase(pointer_emp);
	printf("String dps da função: %s \n", lowercase);
	printf("String dps da função: %s \n", lower_and_uppercase);
	printf("String dps da função: %s \n", empty);
}
