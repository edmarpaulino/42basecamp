/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edpaulin <edpaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 00:16:43 by edpaulin          #+#    #+#             */
/*   Updated: 2021/06/17 00:16:44 by edpaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char	*str, char	*to_find)
{
	int	idx_str;
	int	idx_to_find;

	idx_str = 0;
	if (!to_find[0])
		return (str);
	while (str[idx_str])
	{
		idx_to_find = 0;
		while (str[idx_str + idx_to_find] == to_find[idx_to_find] \
				&& to_find[idx_to_find])
		{
			if (!to_find[idx_to_find + 1])
				return (&str[idx_str]);
			idx_to_find++;
		}
		idx_str++;
	}
	return (0);
}
