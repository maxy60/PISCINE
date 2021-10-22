/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 10:13:13 by bbrassar          #+#    #+#             */
/*   Updated: 2021/02/13 15:43:14 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char **argv)
{
	unsigned int	*grid;
	unsigned int	**result;

	if (argc == 2)
		if ((grid = ft_parsegrid(4, argv[1])))
		{
			ft_tab((result = ft_fill(4, grid)), 4);
			return (0);
		}
	ft_puterr("Error\n");
	return (1);
}
