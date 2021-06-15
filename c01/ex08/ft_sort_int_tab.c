/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edpaulin <edpaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 23:08:06 by edpaulin          #+#    #+#             */
/*   Updated: 2021/06/14 23:08:06 by edpaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int	*tab, int	size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			swap = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = swap;
			i = 0;
		}
		else
			i++;
	}
}
