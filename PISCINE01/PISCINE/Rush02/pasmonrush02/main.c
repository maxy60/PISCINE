/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 14:28:45 by engo              #+#    #+#             */
/*   Updated: 2021/03/28 10:15:26 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "ft.h"

void	ft_putstr(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

char	*load_dictionary(int argc, char **argv)
{
	if (argc == 2)
		return (ft_dictionary_load("numbers.dict"));
	else
		return (ft_dictionary_load(argv[1]));
}

int		check_error(int argc, char **argv)
{
	int		len;
	char	*nbr;

	len = 0;
	nbr = argc == 2 ? argv[1] : argv[2];
	while (nbr[len])
	{
		if (nbr[len] < '0' || '9' < nbr[len])
			return (0);
		len++;
	}
	//if (20 < len)
	//	return (0);
	return (1);
}

int		main(int argc, char **argv)
{
	char *dictionary;
	char *result;

	if ((argc != 2 && argc != 3) || !check_error(argc, argv))
	{
		ft_putstr("Error\n");
		return (1);
	}
	if (!(dictionary = load_dictionary(argc, argv)))
	{
		ft_putstr("Dict Error\n");
		return (1);
	}
	if (!(result = ft_calculate(argc == 2 ? argv[1] : argv[2])))
	{
		ft_putstr("Dict Error\n");
		return (1);
	}
	ft_putstr(result);
	ft_putstr("\n");
	free(result);
	free(dictionary);
	return (0);
}
