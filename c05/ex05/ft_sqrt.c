/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edpaulin <edpaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 00:08:20 by edpaulin          #+#    #+#             */
/*   Updated: 2021/06/19 00:08:20 by edpaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int	nb)
{
	int	root;

	root = 1;
	if (nb <= 0)
		return (0);
	while (root * root < nb)
		root++;
	if (root * root == nb)
		return (root);
	return (0);
}
