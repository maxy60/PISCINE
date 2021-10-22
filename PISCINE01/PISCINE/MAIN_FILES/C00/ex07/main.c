/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 10:16:26 by jodufour          #+#    #+#             */
/*   Updated: 2021/02/04 10:20:20 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void ft_putnbr(int nb);

int		main(int argc, char **argv)
{
	int	n;

	if (argc == 2)
	{
		n = atoi(argv[1]);
		ft_putnbr(n);
	}
	return (0);
}
