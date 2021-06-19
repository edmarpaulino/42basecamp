/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edpaulin <edpaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 00:08:09 by edpaulin          #+#    #+#             */
/*   Updated: 2021/06/19 00:08:09 by edpaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int	nb, int	power)
{
	int	ret;

	ret = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (--power)
		ret *= nb;
	return (ret);
}
