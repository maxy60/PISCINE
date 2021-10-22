/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:41:38 by msainton          #+#    #+#             */
/*   Updated: 2021/03/25 16:01:46 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	inter(char *str, char c, int a)
{
	int b;

	b = 0;
	while (str[b] && (b < a || len == -1))
		if (str[b++] == c)
			return (1);
	return (0);
}
int	main(int argc, char **argv)
{
	int a;

	if (argc == 3)
	{
		a = 0;
		while (argv[1][i])
		{
		if (!inter(argv[1], argv[1][a], a))
	}
}
