/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edpaulin <edpaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 02:39:54 by edpaulin          #+#    #+#             */
/*   Updated: 2021/06/04 12:30:21 by edpaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_print_numbers(void)
{
	char	i;
	char	new_line;

	i = '0';
	new_line = '\n';
	while (i <= '9')
	{
		write(1, &i, 1);
		i++;
	}
	write(1, &new_line, 1);
}
