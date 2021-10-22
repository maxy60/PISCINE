/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathan <jojo19.duf@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 23:20:22 by jonathan          #+#    #+#             */
/*   Updated: 2021/02/09 23:42:23 by jonathan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("   strcmp(\"%s\", \"%s\") == %d\n", argv[1], argv[2], strcmp(argv[1], argv[2]));
		printf("ft_strcmp(\"%s\", \"%s\") == %d\n", argv[1], argv[2], ft_strcmp(argv[1], argv[2]));
	}
	return (0);
}
