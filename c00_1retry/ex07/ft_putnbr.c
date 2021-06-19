/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edpaulin <edpaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 00:10:59 by edpaulin          #+#    #+#             */
/*   Updated: 2021/06/10 01:55:43 by edpaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int		ft_counter(int	nb);
void	ft_calc(int	nb, int	num_size);
void	ft_putchar(char	c);

void	ft_putnbr(int	nb)
{
	int	int_num;
	int	num_size;

	if (nb == 0)
	{
		ft_putchar('0');
		return ;
	}
	else if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else
		int_num = nb;
	if (nb < 0)
	{
		int_num *= -1;
		num_size = ft_counter(int_num);
		ft_putchar('-');
	}
	else
		num_size = ft_counter(int_num);
	ft_calc(int_num, num_size);
}

int	ft_counter(int	nb)
{
	int	counter;

	counter = 0;
	while (nb != 0)
	{
		nb /= 10;
		counter++;
	}
	return (counter);
}

void	ft_calc(int	int_num, int	num_size)
{
	int		i;
	int		rest;

	while (num_size > 0)
	{
		i = num_size;
		rest = int_num;
		while (i > 1)
		{
			rest /= 10;
			i--;
		}		
		ft_putchar((rest % 10) + 48);
		num_size--;
	}
}

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}
