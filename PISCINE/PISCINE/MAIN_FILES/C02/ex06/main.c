/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 14:19:36 by jodufour          #+#    #+#             */
/*   Updated: 2021/02/13 09:12:32 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_printable(char *str);

/*
int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("ft_str_is_printable(\"%s\") == %d\n", argv[1], ft_str_is_printable(argv[1]));
	return (0);
}
*/

int	main(void)
{
	char	str[] = {'a', 't', 'B', '2', '\0'};

	printf("ft_str_is_printable(\"%s\") == %d\n", str, ft_str_is_printable(str));
}
