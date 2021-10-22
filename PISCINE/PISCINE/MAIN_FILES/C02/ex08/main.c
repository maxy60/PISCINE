/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 14:46:14 by jodufour          #+#    #+#             */
/*   Updated: 2021/02/08 08:27:40 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strlowcase(char *str);

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("ft_strlowcase(\"%s\") == ", argv[1]);
		printf("\"%s\"\n", ft_strlowcase(argv[1]));
	}	
	return (0);
}
