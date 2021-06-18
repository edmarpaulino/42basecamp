// #include <stdio.h>
char	*ft_strcpy(char *dest, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	string[] = "Origem";
// 	char	destination[] = "destino";
// 	char	*dest;

// 	printf("Dest antes: %s \n", destination);
// 	dest = ft_strcpy(destination, string);
// 	printf("Dest dps: %s \n", dest);

// }
