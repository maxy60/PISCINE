/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 15:49:40 by jodufour          #+#    #+#             */
/*   Updated: 2021/02/06 12:43:25 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int		main(void)
{
	int	tab[] = {50, 0, 42, 128};
	int	i;
	int	size;

	i = -1;
	size = 4;
	if (!size)
		printf("Tableau vide. Affichage impossible\n");
	else
	{
		printf("Mon tableau originel : {");
		while (++i < size - 1)
			printf("%d ; ", tab[i]);
		printf("%d}\n", tab[i]);

		ft_rev_int_tab(tab, size);

		printf("Mon tableau reversed : {");
		i = -1;
		while (++i < size - 1)
			printf("%d ; ", tab[i]);
		printf("%d}\n", tab[i]);
	}
	return (0);
}
