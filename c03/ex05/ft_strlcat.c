/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edpaulin <edpaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 00:16:50 by edpaulin          #+#    #+#             */
/*   Updated: 2021/06/17 00:16:54 by edpaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char	*str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

unsigned int	ft_strlcat(char	*dest, char	*src, unsigned int	size)
{
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	idx_src;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	idx_src = 0;
	if (size <= len_dest)
		return (size + len_src);
	while (src[idx_src] && size > (len_dest + 1))
	{
		dest[len_dest] = src[idx_src];
		len_dest++;
		idx_src++;
	}
	dest[len_dest] = '\0';
	return (len_dest + ft_strlen(&src[idx_src]));
}
