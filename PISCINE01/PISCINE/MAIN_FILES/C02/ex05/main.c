/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 14:17:30 by jodufour          #+#    #+#             */
/*   Updated: 2021/02/07 14:19:05 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("ft_str_is_uppercase(\"%s\") == %d\n", argv[1], ft_str_is_uppercase(argv[1]));
	return (0);
}
