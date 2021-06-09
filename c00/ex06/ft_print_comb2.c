/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edpaulin <edpaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 22:28:04 by edpaulin          #+#    #+#             */
/*   Updated: 2021/06/08 22:28:05 by edpaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char	n1, char	n2, char	n3, char	n4);

struct	s_number
{
	char	n1;
	char	n2;
	char	n3;
	char	n4;
};

void	ft_print_comb2(void)
{
	struct s_number	perm;

	perm.n1 = '0';
	while (perm.n1 <= '9')
	{
		perm.n2 = '0';
		while (perm.n2 < '9' && perm.n2 != perm.n4)
		{
			perm.n3 = perm.n1;
			while (perm.n3 <= '9')
			{
				perm.n4 = perm.n2 + 1;
				while (perm.n4 <= '9')
				{
					ft_putchar(perm.n1, perm.n2, perm.n3, perm.n4);
					perm.n4++;
				}
				perm.n3++;
			}
			perm.n2++;
		}
		perm.n1++;
	}
}

void	ft_putchar(char	n1, char	n2, char	n3, char	n4)
{
	write(1, &n1, 1);
	write(1, &n2, 1);
	write(1, " ", 1);
	write(1, &n3, 1);
	write(1, &n4, 1);
	if ((n1 + n2 + n3 + n4) < 227)
		write(1, ", ", 2);
}
