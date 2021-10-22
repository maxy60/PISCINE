/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 14:03:34 by jodufour          #+#    #+#             */
/*   Updated: 2021/02/08 14:20:56 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#ifndef SIZE
# define SIZE 4
#endif

void	ft_print_memory(void *addr, unsigned int size);

int		main(void)
{
	int	n;

	n = 1;
	ft_print_memory(&n, SIZE);
	printf("\nWith printf this time :\n%p\n", &n);
	printf("sizeof(unsigned long) == %lu", sizeof(unsigned long));
	return (0);
}
