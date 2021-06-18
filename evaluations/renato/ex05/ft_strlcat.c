/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 03:37:29 by rfelicio          #+#    #+#             */
/*   Updated: 2021/06/11 21:51:27 by rfelicio         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	char_nbr_copied;

	dest_len = (unsigned int)ft_strlen(dest);
	src_len = (unsigned int)ft_strlen(src);
	char_nbr_copied = 0;
	if (size < dest_len)
	{
		return (src_len + size);
	}
	dest += dest_len;
	while (*src != '\0' && dest_len + char_nbr_copied + 1 < size)
	{
		*dest++ = *src++;
		char_nbr_copied++;
	}
	*dest = '\0';
	return (((unsigned int ) dest_len) + ((unsigned int )src_len));
}
