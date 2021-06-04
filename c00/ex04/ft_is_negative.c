/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edpaulin <edpaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 12:32:39 by edpaulin          #+#    #+#             */
/*   Updated: 2021/06/04 20:33:52 by edpaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N\n", 2);
	}
	else
	{
		write(1, "P\n", 2);
	}
}
