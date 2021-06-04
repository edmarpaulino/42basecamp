/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edpaulin <edpaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 02:04:33 by edpaulin          #+#    #+#             */
/*   Updated: 2021/06/04 12:11:24 by edpaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_print_alphabet(void)
{
	int	i;
	int	esc;

	i = 97;
	esc = 10;
	while (i < 123)
	{
		write(1, &i, 1);
		i++;
	}
	write(1, &esc, 1);
}
