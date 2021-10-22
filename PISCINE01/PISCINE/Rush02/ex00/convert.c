/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 13:29:08 by msanjuan          #+#    #+#             */
/*   Updated: 2021/03/27 11:28:50 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 **	Convert est divisee en deux parties : une pour convertir la string de l'input user en atoi pour passer la contrainte de la main ft ne prenant 
 ** que des nombres, et l'autre pour reconvertir les int decomposes en str, afin de parse le dictionnaire grace a un strstr.
 */

#include "ft.h"

unsigned long long int		ft_atoi(char *str)
{
	unsigned long long int	i;
	unsigned long long int	res_value;
	int						neg_count;

	i = 0;
	res_value = 0;
	neg_count = 1;
	while (str[i] == ' ' || str[i] == '\f'
			|| str[i] == '\n' || str[i] == '\r'
			|| str[i] == '\t' || str[i] == '\v')
		i++;
	if (str[i] == '-')
		neg_count = -1;
	while (str[i] && (str[i] > 47 && str[i] < 58))
	{
		res_value = res_value * 10 + str[i] - 48;
		i++;
	}
	return (res_value * neg_count);
}

void reverse_str(char str[], int size)
{
    int i;
    int j;
    char temp[56];

    i = 0;
    j = size - 1;
    while (i < j)
    {
        temp[i] = str[j]; // swap
        str[i] = str[j];
        str[j] = temp[i];
        i++;
        j--;
    }
}

char *ft_itoa(unsigned long long int nb, char *str)
{
    int i = 0; // compteur length
    int reste; // aka reste du modulo

    if (nb == 0)
    {
        str[i++] = '0';
        str[i] = '\0';
        return str;
    }

    while (nb != 0)
    {
        reste = nb % 10;
        str[i++] = (reste > 9) ? (reste - 10) + 'a' : reste + '0';
        nb = nb / 10;
    }

    str[i] = '\0';

    reverse_str(str, i);

    return (str);
}

#include <stdio.h>

int main()
{
    char str[50];
    printf("%s\n", ft_itoa(1113, str));
    return(0);
}
