/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 13:32:22 by jodufour          #+#    #+#             */
/*   Updated: 2021/02/08 08:16:12 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#ifndef SRC_SIZE
# define SRC_SIZE
# define SRC "Coucou le monde"
# define SIZE 15
#endif

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char			*dest1;
	char			*dest2;

	if (!(dest1 = malloc(SIZE * sizeof(char))))
		return (0);
	if (!(dest2 = malloc(SIZE * sizeof(char))))
		return (0);
	dest1 = strcpy(dest1, SRC);
	dest2 = ft_strcpy(dest2, SRC);
	printf("dest1 = strcpy(\"%s\") -->    \"%s\"\n", SRC, dest1);
	printf("dest2 = ft_strcpy(\"%s\") --> \"%s\"\n", SRC, dest2);
	return (0);
}
