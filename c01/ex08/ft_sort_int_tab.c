/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edpaulin <edpaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 02:03:48 by edpaulin          #+#    #+#             */
/*   Updated: 2021/06/11 02:03:50 by edpaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int	*tab, int	size)
{
	int	i;
	int	aux;

	i = 0;
	while (i <= size)
	{
		if (tab[i] >= tab[i + 1])
		{
			aux = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = aux;
			i = 0;
		}
		else
			i++;
	}
}
