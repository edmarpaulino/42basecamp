#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char	*ft_strcat(char *dest, char *src);
int		ft_strlen(char *str);

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_lenght;

	i = 0;
	dest_lenght = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[dest_lenght + i] = src[i];
		i++;
	}
	dest[dest_lenght + i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != 0)
	{
		c++;
	}
	return (c);
}

int	main(void)
{
	char *src;
	char *dest;
	char *ft_src;
	char *ft_dest;
	char *result;
	char *ft_result;

	src = calloc(7, sizeof(char));
	dest = calloc(12, sizeof(char));
	ft_src = calloc(7, sizeof(char));
	ft_dest = calloc(12, sizeof(char));
	strcpy(src, "galera");
	strcpy(dest, "alo ");
	strcpy(ft_src, "galera");
	strcpy(ft_dest, "alo ");
	result = strcat(dest, src);
	ft_result = ft_strcat(ft_dest, ft_src);
	if (ft_dest != ft_result)
		printf("KO, return value of ft_strcar is different of ft_dest. ft_strcar=%p ft_dest=%p\n", ft_result, ft_dest);
	else if (strcmp(result, ft_result) != 0)
		printf("KO, value returned from strcmp with ft_strcat and strcat is different of zero(%d).\n", strcmp(result, ft_result));
	else
		printf("OK.\nresult: %s\n", ft_result);
	return (0);
}