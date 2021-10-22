/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 14:14:16 by jodufour          #+#    #+#             */
/*   Updated: 2021/02/07 14:16:29 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("ft_str_is_lowercase(\"%s\") == %d\n", argv[1], ft_str_is_lowercase(argv[1]));
	return (0);
}
