#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char	*ft_strstr(char *str, char *to_find);
int		ft_strcmp(char *s1, char *s2);

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	char	*finded;

	i = 0;
	finded = 0;
	if (to_find[0] == '\0')
	{
		finded = str;
	}
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			if (ft_strcmp(&str[i], to_find) == 0)
			{
				return (&str[i]);
			}
		}
		i++;
	}
	return (finded);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	diff;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	diff = (int)(unsigned char) s1[i] - (int)(unsigned char) s2[i];
	return (diff);
}

int	main(void)
{
	char *str;
	char *to_find;
	char *buff;
	char *ft_buff;

	str = strcpy(calloc(11, sizeof(char)), "alo galera");
	to_find = strcpy(calloc(7, sizeof(char)), "galera");
	buff = strstr(str, to_find);
	ft_buff = ft_strstr(str, to_find);
	if (buff != ft_buff)
		printf("[1] KO, substrings don't match(expected:%s, got:%s)\n", buff, ft_buff); 
	else
		printf("[1] OK. expected: %s result: %s\n", buff, ft_buff);
	str = strcpy(calloc(11, sizeof(char)), "alo galera");
	to_find = strcpy(calloc(7, sizeof(char)), "galerA");
	buff = strstr(str, to_find);
	ft_buff = ft_strstr(str, to_find);
	if (buff != ft_buff)
		printf("[2] KO, substrings don't match(expected:%s, got:%s)\n", buff, ft_buff); 
	else
		printf("[2] OK. expected: %s result: %s\n", buff, ft_buff);
	str = strcpy(calloc(11, sizeof(char)), "alo galera");
	to_find = strcpy(calloc(1, sizeof(char)), "");
	buff = strstr(str, to_find);
	ft_buff = ft_strstr(str, to_find);
	if (buff != ft_buff)
		printf("[2] KO, substrings don't match(expected:%s, got:%s)\n", buff, ft_buff); 
	else
		printf("[2] OK. expected: %s result: %s\n", buff, ft_buff);
	return (0);
}
