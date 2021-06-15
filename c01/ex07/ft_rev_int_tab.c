/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edpaulin <edpaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 23:07:56 by edpaulin          #+#    #+#             */
/*   Updated: 2021/06/14 23:07:57 by edpaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int	*tab, int	size)
{
	int	*array;
	int	swap;
	int	inc;
	int	dec;

	array = tab;
	inc = 0;
	dec = size - 1;
	while (inc < size / 2)
	{
		swap = tab[inc];
		tab[inc] = array[dec];
		array[dec] = swap;
		dec--;
		inc++;
	}
}
