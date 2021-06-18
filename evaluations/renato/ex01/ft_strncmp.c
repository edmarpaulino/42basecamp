/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 17:00:40 by rfelicio          #+#    #+#             */
/*   Updated: 2021/06/10 19:43:21 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
