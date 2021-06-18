int	ft_str_is_printable(char *str)
{
	int	index;
	int	printable;

	index = 0;
	while (str[index] != '\0')
	{
		printable = 0;
		if (str[index] >= 32 && str[index] <= 127)
			printable = 1;
		else if (printable == 0)
			return (0);
		index++;
	}
	return (1);
}
