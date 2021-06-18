#include <stdio.h>
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char lowercase[] = "abcdefghijklmn234{!opqrstuvwxyz";
// 	char *pointer_lwr;
// 	pointer_lwr = lowercase;
// 	char lower_and_uppercase[] = 
// 	"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
// 	char *pointer_all;
// 	pointer_all = lower_and_uppercase;

// 	char empty[] = "";
// 	char *pointer_emp;
// 	pointer_emp = empty;

// 	printf("String antes da função: %s \n", lowercase);
// 	printf("String antes da função: %s \n", lower_and_uppercase);
// 	printf("String antes da função: %s \n", empty);
// 	ft_strupcase(pointer_lwr);
// 	ft_strupcase(pointer_all);
// 	ft_strupcase(pointer_emp);
// 	printf("String dps da função: %s \n", lowercase);
// 	printf("String dps da função: %s \n", lower_and_uppercase);
// 	printf("String dps da função: %s \n", empty);
// }

int	main(void)
{
	char str1[] = "abcde121236195fghi";
	char str2[] = "AbcDefG$%><weqhI";
	char str3[] = "ABCDEFG156446HI";

	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	printf("str3: %s\n", str3);
	ft_strupcase(str1);
	ft_strupcase(str2);
	ft_strupcase(str3);
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	printf("str3: %s\n", str3);
	return (0);
}

