/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 11:39:31 by msainton          #+#    #+#             */
/*   Updated: 2021/03/25 12:34:23 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void	last_word(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
		a++;
	a--;
	while (str[a] != ' ' && str[a] != '\t')
		a--;
	a++;
	while (str[a] != '\0')
	{
		write(1, &str[a], 1);
		a++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		last_word(argv[1]);
	write(1, "\n", 1);
}
