/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 18:19:24 by rfelicio          #+#    #+#             */
/*   Updated: 2021/06/10 20:01:29 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	str_len;

	str_len = 0;
	while (str[str_len] != '\0')
		str_len++;
	return (str_len);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	if (n == 0)
		return (0);
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2 && (counter < (n - 1)))
	{
		s1++;
		s2++;
		counter++;
	}
	return ((unsigned char )*s1 - (unsigned char )*s2);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	to_find_len;

	to_find_len = ft_strlen(to_find);
	if (!to_find_len)
		return (str);
	if (*to_find == '\0')
		return (0);
	while (*str != '\0')
	{
		if (ft_strncmp(str, to_find, to_find_len) == 0)
			return (str);
		str++;
	}
	return (0);
}
