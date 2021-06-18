int	ft_str_is_uppercase(char *str)
{
	int	index;
	int	uppercase;

	index = 0;
	while (str[index] != '\0')
	{
		uppercase = 0;
		if (str[index] >= 'A' && str[index] <= 'Z')
			uppercase = 1;
		else if (uppercase == 0)
			return (0);
		index++;
	}
	return (1);
}
