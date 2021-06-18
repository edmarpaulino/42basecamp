int	check_number(char a)
{
	char	number;
	int		i;

	number = '0';
	i = 0;
	while (i <= 9)
	{
		if (a == number + i)
			return (1);
		i++;
	}
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	int		i;
	int		flag;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		flag = check_number(str[i]);
		if (flag != 1)
			return (0);
		i++;
	}
	return (1);
}
