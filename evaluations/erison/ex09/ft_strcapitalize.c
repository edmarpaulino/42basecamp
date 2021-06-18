char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		else if ((str[i - 1] == 32) && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		else if ((str[i - 1] >= 42 && str[i - 1] <= 47) \
		&& str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
