/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 13:50:27 by jodufour          #+#    #+#             */
/*   Updated: 2021/02/07 14:06:56 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#ifndef SRC_SIZE
# define SRC_SIZE
# define SRC "Hello world"
# define SIZE 12
# define N 12
#endif

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	*dest1;
	char	*dest2;

	if (!(dest1 = malloc(SIZE * sizeof(char))))
		return (42);
	if (!(dest2 = malloc(SIZE * sizeof(char))))
		return (42);
	dest1 = strncpy(dest1, SRC, N);
	dest2 = ft_strncpy(dest2, SRC, N);
	printf("strncpy(\"%s\", %d) -->    \"%s\"\n", SRC, N, dest1);
	printf("ft_strncpy(\"%s\", %d) --> \"%s\"\n", SRC, N, dest2);
	return (0);
}
