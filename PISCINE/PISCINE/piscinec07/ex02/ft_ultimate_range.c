/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 12:51:44 by msainton          #+#    #+#             */
/*   Updated: 2021/02/25 16:37:21 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int *r;
	int a;

	a = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (!(r = malloc(sizeof(int) * (max - min))))
		return (-1);
	while (min < max)
	{
		r[a] = min;
		min++;
		a++;
	}
	*range = r;
	return (a);
}
#include <stdio.h>
int main()
{
	printf("%d\n", ft_ultimate_range( 10, 5));
}
