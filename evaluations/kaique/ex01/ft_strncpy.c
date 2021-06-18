#include <stdio.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	main(void)
{
	char	string[] = "Origem";
	char	destination[] = "destino";
	unsigned int	n;

	n = 7;

	printf("Dest antes: %s \n", destination);
	ft_strncpy(destination, string, n);
	printf("Dest dps: %s \n", destination);
}
