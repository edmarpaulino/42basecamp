int	ft_str_is_alpha(char *str)
{
	int	index;
	int	alpha;

	index = 0;
	while (str[index] != '\0')
	{
		alpha = 0;
		if (str[index] >= 'a' && str[index] <= 'z')
			alpha = 1;
		if (str[index] >= 'A' && str[index] <= 'Z')
			alpha = 1;
		if (alpha == 0)
			return (0);
		index++;
	}
	return (1);
}
