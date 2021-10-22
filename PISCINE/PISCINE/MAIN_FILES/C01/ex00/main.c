/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 10:27:47 by jodufour          #+#    #+#             */
/*   Updated: 2021/02/06 09:24:57 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void ft_ft(int *nbr);

int	main(int argc, char **argv)
{
	int	n;

	if (argc == 2)
	{
		n = atoi(argv[1]);
		printf("Avant ft_ft, n == %d\n", n);
		ft_ft(&n);
		printf("Apres ft_ft, n == %d\n", n);
	}
	return (0);
}
