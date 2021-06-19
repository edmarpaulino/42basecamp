/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edpaulin <edpaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 00:08:25 by edpaulin          #+#    #+#             */
/*   Updated: 2021/06/19 00:08:26 by edpaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int	nb)
{
	int	root;

	root = 5;
	if (nb <= 1)
		return (0);
	else if (nb <= 3)
		return (1);
	else if ((nb % 2) == 0 || (nb % 3) == 0)
		return (0);
	while (root * root < nb)
	{
		if ((nb % root) == 0 && (nb % (root + 1)) == 0)
			return (0);
		root += 6;
	}
	return (1);
}
