/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edpaulin <edpaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 23:31:32 by edpaulin          #+#    #+#             */
/*   Updated: 2021/06/10 00:07:45 by edpaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char	c);

void	ft_print_comb2(void)
{
	int	first;
	int	second;

	first = 0;
	while (first <= 98)
	{
		second = first;
		while (++second <= 99)
		{
			ft_putchar((first / 10) + '0');
			ft_putchar((first % 10) + '0');
			ft_putchar(' ');
			ft_putchar((second / 10) + '0');
			ft_putchar((second % 10) + '0');
			if ((first / 10) != 9 || (first % 10) != 8)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		first++;
	}
}

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}
