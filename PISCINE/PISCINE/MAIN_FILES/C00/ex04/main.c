/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 10:11:49 by jodufour          #+#    #+#             */
/*   Updated: 2021/02/04 10:13:24 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void ft_is_negative(int n);

int	main(int argc, char **argv)
{
	int	n;

	if (argc == 2)
	{
		n = atoi(argv[1]);
		ft_is_negative(n);
	}
	return (0);
}
