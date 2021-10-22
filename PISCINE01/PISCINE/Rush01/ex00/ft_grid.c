/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grid.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 10:31:55 by bbrassar          #+#    #+#             */
/*   Updated: 2021/02/13 16:04:21 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft.h"

unsigned int	*ft_parsegrid(unsigned int size, char *str)
{
	int				i;
	int				j;
	unsigned int	*grid;

	i = 0;
	j = 0;
	grid = malloc(sizeof(int) * size * size);
	while (grid && str[i])
	{
		if (i % 2 == 0)
		{
			if (ft_isnumeric(str[i]))
				grid[j++] = str[i] - '0';
			else
				grid = NULL;
		}
		else if (str[i] != ' ')
			grid = NULL;
		i++;
	}
	return (grid);
}

unsigned int	**ft_fill(unsigned int size, unsigned int *grid)
{
	unsigned int	i;
	unsigned int	**result;

	i = 0;
	result = malloc(sizeof(*result) * size);
	if (result)
	{
		while (i < size)
			result[i++] = malloc(sizeof(**result));
		while (i)
		{
			i--;
		}
	}	
	return (result);
}
