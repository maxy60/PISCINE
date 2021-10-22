/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 15:37:37 by msainton          #+#    #+#             */
/*   Updated: 2021/02/13 16:57:23 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void ft_tab(unsigned int **tab, unsigned int size)
{
	int x;
	int y;
		
	x = 0;
	y = 0;
	while (y <= size)
	{
		ft_putchar('0' + tab[x][y]);
		x++;
		if (x == size)
		{
			ft_putchar('\n');
			y++;
			x = 0;
		}		
	}
}

int _main()
{
	int tab[4][4];

	int a;
	int b;

	a = 0;
	b = 0;
	while(b <= 4)
	{
		ft_tab(tab, 4);
		b++;
		if (a == 4)
		{
			a++;
			b = 0;
		}
	}

	return (0);
}
