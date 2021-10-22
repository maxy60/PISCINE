/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathan <jojo19.duf@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 23:56:25 by jonathan          #+#    #+#             */
/*   Updated: 2021/02/10 00:06:57 by jonathan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef DATA
# define DATA
# define DST "I love to say "
# define SRC "Hello world"
# define SIZE 100
#endif

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	dst1[SIZE] = DST;
	char	dst2[SIZE] = DST;
	char	*r1;
	char	*r2;

	if (!(r1 = malloc(SIZE)))
		return (42);
	if (!(r2 = malloc(SIZE)))
		return (42);
	printf("   strcat(\"%s\", \"%s\") == ", dst1, SRC);
	r1 = strcat(dst1, SRC);
	printf("\"%s\"\n", r1);
	printf("ft_strcat(\"%s\", \"%s\") == ", dst2, SRC);
	r2 = ft_strcat(dst2, SRC);
	printf("\"%s\"\n", r2);
	return (0);
}
