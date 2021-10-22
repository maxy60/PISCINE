/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 14:07:31 by jodufour          #+#    #+#             */
/*   Updated: 2021/02/07 14:11:01 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("ft_str_is_alpha(\"%s\") == %d\n", argv[1], ft_str_is_alpha(argv[1]));
	return (0);
}
