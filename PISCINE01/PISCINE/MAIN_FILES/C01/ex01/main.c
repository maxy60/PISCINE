/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 10:30:18 by jodufour          #+#    #+#             */
/*   Updated: 2021/02/06 09:28:44 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_ultimate_ft(int *********nbr);

int		main(int argc, char **argv)
{
	int	*********n;

	if (argc == 2)
	{
		if (!(n = malloc(sizeof(int *********))))
			return (0);
		if (!(*n = malloc(sizeof(int ********))))
			return (0);
		if (!(**n = malloc(sizeof(int *******))))
			return (0);
		if (!(***n = malloc(sizeof(int ******))))
			return (0);
		if (!(****n = malloc(sizeof(int *****))))
			return (0);
		if (!(*****n = malloc(sizeof(int ****))))
			return (0);
		if (!(******n = malloc(sizeof(int ***))))
			return (0);
		if (!(*******n = malloc(sizeof(int **))))
			return (0);
		if (!(********n = malloc(sizeof(int *))))
			return (0);
		*********n = atoi(argv[1]);
		printf("Avant ft_ultimate_ft n == %d\n", *********n);
		ft_ultimate_ft(n);
		printf("Avant ft_ultimate_ft n == %d\n", *********n);
	}
	return (0);
}
