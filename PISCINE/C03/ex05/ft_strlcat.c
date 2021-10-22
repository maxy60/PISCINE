/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:30:46 by msainton          #+#    #+#             */
/*   Updated: 2021/03/21 13:23:02 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
		a++;
	return (a);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int a;
	unsigned int b;

	a = ft_strlen(dest);
	b = 0;
	if (size <= a)
		return (size + ft_strlen(src));
	while (src[b] && a + 1 < size)
	{
		dest[a + b] = src[b];
		b++;
	}
	dest[a] = '\0';
	return (a + ft_strlen(&src[b]));
}
