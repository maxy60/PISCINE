/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 10:57:20 by jodufour          #+#    #+#             */
/*   Updated: 2021/02/05 17:15:13 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(int argc, char **argv)
{
	int	a;
	int	b;
	int	*div;
	int	*mod;

	if (argc == 3)
	{
		if (!(div = malloc(sizeof(int))))
			return (0);
		if (!(mod = malloc(sizeof(int))))
			return (0);
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		ft_div_mod(a, b, div, mod);
		printf("div == %d\n", *div);
		printf("mod == %d\n", *mod);
	}
	return (0);
}
