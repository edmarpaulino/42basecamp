/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edpaulin <edpaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 02:36:07 by edpaulin          #+#    #+#             */
/*   Updated: 2021/06/04 12:12:12 by edpaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_print_reverse_alphabet(void)
{
	int	i;
	int	esc;

	i = 122;
	esc = 10;
	while (i > 96)
	{
		write(1, &i, 1);
		i--;
	}
	write(1, &esc, 1);
}
