/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 15:17:01 by jodufour          #+#    #+#             */
/*   Updated: 2021/02/05 17:17:11 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void ft_ultimate_div_mod(int *a, int *b);

int	main(int argc, char **argv)
{
	int a;
	int	b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		ft_ultimate_div_mod(&a, &b);
		printf("a == %d\n", a);
		printf("b == %d\n", b);
	}
	return (0);
}
