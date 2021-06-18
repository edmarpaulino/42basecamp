int	ft_str_is_numeric(char *str)
{
	int	index;
	int	numeric;

	index = 0;
	while (str[index] != '\0')
	{
		numeric = 0;
		if (str[index] >= '0' && str[index] <= '9')
			numeric = 1;
		else if (numeric == 0)
			return (0);
		index++;
	}
	return (1);
}
