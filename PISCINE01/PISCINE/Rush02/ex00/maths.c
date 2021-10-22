/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maths.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrancoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 12:46:45 by tfrancoi          #+#    #+#             */
/*   Updated: 2021/02/21 15:22:15 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	destructuration(unsigned long long int nb)
{
	unsigned long long int nb2;
	unsigned long long int nb3;
	unsigned long long int mod;

	nb2 = 0;
	nb3 = 0;
	mod = 10;
	while (nb > 20 && (nb & mod) != 0)
	{
		if ((nb2 % mod) == 0)
			mod = (mod * 10);
		nb2 = (nb % mod);
		mod = (mod * 10);
	}
	if (nb > 20)
	{
		mod = (mod / 10);
		nb2 = (nb - nb2);
		nb3 = (nb2 / mod);
		nb2 = (nb2 / nb3);
		//ft_itoa(nb3);
		printf("%llu nb3", nb3);
		//ft_itoa(nb2);
		printf("%llu nb2", nb2);
		nb2 = (nb2 * nb3);
		destructuration(nb - nb2);

	}
	else
		printf("%llu", nb);
}

int main()
{
	destructuration(123);
	return(0);
}
