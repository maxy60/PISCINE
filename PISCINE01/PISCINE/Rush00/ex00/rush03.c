/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnecib <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 09:51:04 by mnecib            #+#    #+#             */
/*   Updated: 2021/02/07 11:16:03 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char ft);

void	putletter(int lx, int hy, int x, int y)
{
	if ((lx == 1 && hy == 1) || (hy == y && lx == 1))
		ft_putchar('A');
	else if ((lx == x && hy == 1) || (lx == x && hy == y))
		ft_putchar('C');
	else if ((lx == 1 || hy == 1 || lx == x || hy == y)
			&& ((lx > 1 && lx < x) || (hy > 1 && hy < y)))
		ft_putchar('B');
	else if (lx > 1 && hy > 1 && lx < x && hy < y)
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int lx;
	int hy;

	lx = 1;
	hy = 1;
	if (x > 0 && y > 0)
	{
		while (hy <= y)
		{
			while (lx <= x)
			{
				putletter(lx, hy, x, y);
				lx++;
			}
			ft_putchar('\n');
			lx = 1;
			hy++;
		}
	}
}
