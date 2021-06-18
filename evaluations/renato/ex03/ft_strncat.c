/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 17:56:30 by rfelicio          #+#    #+#             */
/*   Updated: 2021/06/10 20:00:10 by rfelicio         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	counter;
	char			*dest_start_addr;

	counter = 0;
	dest_start_addr = dest;
	dest += ft_strlen(dest);
	while (*src != '\0' && counter < nb)
	{
		*dest++ = *src++;
		counter++;
	}
	*dest = '\0';
	return (dest_start_addr);
}
