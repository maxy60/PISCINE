/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 15:30:19 by jodufour          #+#    #+#             */
/*   Updated: 2021/02/05 17:23:37 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h> 

int	ft_strlen(char *);

int	main(int argc, char **argv)
{
	int	len;

	if (argc == 2)
	{
		len = ft_strlen(argv[1]);
		printf("len == %d\n", len);
	}
	return (0);
}
