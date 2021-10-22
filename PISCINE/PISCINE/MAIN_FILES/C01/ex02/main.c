/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 10:47:48 by jodufour          #+#    #+#             */
/*   Updated: 2021/02/04 10:51:18 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_swap(int *a, int *b);

int		main(int argc, char **argv)
{
	int	a;
	int	b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("Avant le swap :  a == %d   |   b == %d\n", a, b);
		ft_swap(&a, &b);
		printf("Apres le swap :  a == %d   |   b == %d\n", a, b);
	}
	return (0);
}
