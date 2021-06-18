int	ft_str_is_lowercase(char *str)
{
	int	index;
	int	lowercase;

	index = 0;
	while (str[index] != '\0')
	{
		lowercase = 0;
		if (str[index] >= 'a' && str[index] <= 'z')
			lowercase = 1;
		else if (lowercase == 0)
			return (0);
		index++;
	}
	return (1);
}
