/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnecib <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 13:25:02 by mnecib            #+#    #+#             */
/*   Updated: 2021/02/11 13:37:38 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char ft);

void	putletter(int lx, int hy, int x, int y)
{
	if ((lx == 1 && hy == 1) || (hy == y && lx == 1)
			|| (lx == x && hy == 1) || (lx == x && hy == y))
		ft_putchar('o');
	else if ((hy > 1 && hy < y) && (lx == 1 || lx == x))
		ft_putchar('|');
	else if ((lx > 1 && lx < x) && (hy == 1 || hy == y))
		ft_putchar('-');
	else
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
