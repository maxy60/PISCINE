/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 14:35:42 by jodufour          #+#    #+#             */
/*   Updated: 2021/02/07 14:45:55 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strupcase(char *str);

int		main(int argc, char **argv)
{
	char	*str;
	int		len;

	if (argc == 2)
	{
		len = strlen(argv[1]);
		if (!(str = malloc((len + 1) * sizeof(char))))
			return (42);
		str = ft_strupcase(argv[1]);
		printf("ft_strupcase(\"%s\") == %s\n", argv[1], str);
	}
	return (0);
}
