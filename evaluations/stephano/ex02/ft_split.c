#include <stdlib.h>
#include <stdio.h>


char	is_sep(char c, char *sep)
{
	while (*sep != '\0')
	{
		if (c == *sep)
			return (1);
		++sep;
	}
	return (0);
}

int	get_str_count(char *str, char *sep)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		if (!is_sep(*str, sep))
			if (is_sep(*(str + 1), sep) || *(str + 1) == '\0')
				++count;
		++str;
	}
	return (count);
}

char	*split_str(char *str, char *sep, int *last_pos)
{
	int		len;
	char	*new_str;
	int		i;

	while (is_sep(str[*last_pos], sep))
		++*last_pos;
	len = 0;
	while (!is_sep(str[*last_pos + len], sep) && str[*last_pos + len] != '\0')
		++len;
	new_str = malloc((len + 1) * sizeof(*new_str));
	if (new_str == 0)
		return (0);
	i = 0;
	while (i < len)
	{
		new_str[i] = str[*last_pos + i];
		++i;
	}
	new_str[i] = '\0';
	*last_pos = len;
	return (new_str);
}

char	**ft_split(char *str, char *charset)
{
	char	**splitted;
	int		splitted_size;
	int		i_str;
	int		i_splitted;

	splitted_size = get_str_count(str, charset);
	splitted = malloc((splitted_size + 1) * sizeof(*splitted));
	if (splitted == 0)
		return (0);
	i_str = 0;
	i_splitted = 0;
	while (i_splitted < splitted_size)
	{
		splitted[i_splitted] = split_str(str, charset, &i_str);
		if (splitted[i_splitted] == 0)
			return (0);
		++i_splitted;
	}
	splitted[i_splitted] = 0;
	return (splitted);
}

int		main(void)
{
	int		str_n;
	char	*str;
	char	*sep;
	char	**strs;

	str = "WfrONjnyoiSQ5GYKxJ6NSlqrUtPkklcoKR f";
	sep = "ySzX";
	strs = ft_split(str, sep);
	str_n = 0;
	while (strs[str_n] != 0)
	{
		printf("[%d]: %s\n", str_n, strs[str_n]);
		str_n++;
	}
	free(strs);
	return (0);
}
