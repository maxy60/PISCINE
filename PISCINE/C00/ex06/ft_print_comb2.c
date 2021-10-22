/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 13:35:40 by msainton          #+#    #+#             */
/*   Updated: 2021/03/16 16:05:14 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	divmod(int b)
{
	int n1;
	int n2;

	n1 = b / 10;
	n2 = b % 10;
	n1 += 48;
	n2 += 48;
	write(1, &n1, 1);
	write(1, &n2, 1);
}

void	ft_print_comb2(void)
{
	int y;
	int z;

	y = 0;
	z = y + 1;
	while (y <= 98)
	{
		while (z <= 99)
		{
			divmod(y);
			write(1, " ", 1);
			divmod(z);
			if (!(y == 98 && z == 99))
				write(1, ", ", 2);
			z++;
		}
		y++;
		z = y + 1;
	}
}
