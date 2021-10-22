/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 10:40:43 by msainton          #+#    #+#             */
/*   Updated: 2021/02/25 12:49:32 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *a;
	int b;

	b = 0;
	if (min >= max)
	{
		a = NULL;
		return (a);
	}
	if(!(a = (int*)malloc(sizeof(int) * (max - min))))
			return (NULL);
	while (min < max)
	{
		a[b] = min;
		b++;
		min++;
	}
	return (a);
}
#include <stdio.h>
int main()
{
	int i = 0;
	while(i < 12)
		printf("%d\n", ft_range(5, 17)[i++]);
}
