/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 09:23:47 by msainton          #+#    #+#             */
/*   Updated: 2021/02/25 12:46:37 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
char *ft_strdup(char *src)
{
	int a;
	int b;
	char *s;

	a = 0;
	b = 0;
	while (src[a] != '\0')
		a++;
	if(!(s = (char *)malloc(sizeof(*src * (a + 1)))))
		return (0);
	s = malloc(sizeof(*src) * (a + 1));
	while (src[b] != '\0')
	{
		s[b] = src[b];
		b++;
	}
	s[b] = '\0';
	return(s);
}

int main (int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%s\n", ft_strdup(argv[1]));
	}
}
