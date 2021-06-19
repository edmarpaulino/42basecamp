/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edpaulin <edpaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 17:12:02 by edpaulin          #+#    #+#             */
/*   Updated: 2021/06/18 17:12:03 by edpaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putstr(char	*str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		write(1, &str[index], 1);
		index++;
	}
}

int	main(int	argc, char	*argv[])
{
	int	index;

	index = 1;
	while (index < argc)
	{
		ft_putstr(argv[index]);
		write(1, "\n", 1);
		index++;
	}
	return (0);
}
