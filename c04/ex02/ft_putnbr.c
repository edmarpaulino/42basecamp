/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edpaulin <edpaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 13:46:33 by edpaulin          #+#    #+#             */
/*   Updated: 2021/06/18 13:50:14 by edpaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int	nb)
{
	int		idx;
	char	c_number[10];

	idx = 0;
	if (nb == 0)
		ft_putchar('0');
	else if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	while (nb != 0 && nb != -2147483648)
	{
		c_number[idx] = ((nb % 10) + '0');
		nb /= 10;
		idx++;
	}
	while (--idx >= 0)
		ft_putchar(c_number[idx]);
}
