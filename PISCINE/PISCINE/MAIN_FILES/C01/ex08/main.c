/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 15:59:52 by jodufour          #+#    #+#             */
/*   Updated: 2021/02/06 12:44:57 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int     tab[] = {123, 456, 789, 0, -3};
	int     i;
	int     size;

	i = -1;
	size = 5;
	printf("Mon tableau originel : {");
	while (++i < size - 1)
		printf("%d ; ", tab[i]);
	printf("%d}\n", tab[i]);
	ft_sort_int_tab(tab, size);
	printf("Mon tableau sorted   : {");
	i = -1;
	while (++i < size - 1)
		printf("%d ; ", tab[i]);
	printf("%d}\n", tab[i]);
	return (0);
}
