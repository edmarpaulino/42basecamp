int	check_alpha(char a)
{
	char	lower;
	char	upper;
	int		i;

	lower = 'a';
	upper = 'A';
	i = 0;
	while (i <= 26)
	{
		if (a == lower + i)
			return (1);
		if (a == upper + i)
			return (1);
		i++;
	}
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	int		i;
	int		flag;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		flag = check_alpha(str[i]);
		if (flag != 1)
			return (0);
		i++;
	}
	return (1);
}
