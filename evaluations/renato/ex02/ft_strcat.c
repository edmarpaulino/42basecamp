/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 17:25:03 by rfelicio          #+#    #+#             */
/*   Updated: 2021/06/10 19:59:24 by rfelicio         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	char	*dest_start_addr;

	dest_start_addr = dest;
	dest += ft_strlen(dest);
	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (dest_start_addr);
}
