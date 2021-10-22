/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 08:28:32 by jodufour          #+#    #+#             */
/*   Updated: 2021/02/08 08:33:06 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("ft_strcapitalize(\"%s\") == ", argv[1]);
		printf("\"%s\"\n", ft_strcapitalize(argv[1]));
	}
	return (0);
}
