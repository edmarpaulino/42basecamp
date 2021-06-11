/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edpaulin <edpaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 02:03:39 by edpaulin          #+#    #+#             */
/*   Updated: 2021/06/11 02:03:40 by edpaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int	*tab, int	size)
{
	int	swap;
	int	i;
	int	*array;

	array = tab + size - 1;
	i = 0;
	while (i < size / 2)
	{
		swap = *tab;
		*tab = *array;
		*array = swap;
		tab++;
		array--;
		i++;
	}
}
