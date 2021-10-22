/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 09:24:24 by msainton          #+#    #+#             */
/*   Updated: 2021/06/07 10:57:48 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int is_in_charset(char c)
{
    if (c == ' ' || c == '\t' || c == '\n')
        return(1);
    return (0);
}

char **ft_split(char *str)
{
    int a;
    int b;
    int c;
    char **dest;

    a = 0;
    b = 0;
    dest = (char **)malloc(sizeof(char *) * 999999999);
    while (is_in_charset(str[a]) == 1)
        a++;
    while (str[a] != '\0')
    {
        c = 0;
		dest[b] = (char *)malloc(sizeof(char) * 9999999999);
        while (is_in_charset(str[a]) == 0)
        {
            dest[b][c] = str[a];
            a++;
            c++;
        }
        while (is_in_charset(str[a]) == 1)
        a++;
        dest[b][c] = '\0';
        b++;
    }
    dest[b] = NULL;
    return (dest);
}
#include <stdio.h>
int main(void)
{
    char **tab;

    tab = ft_split("  \nsaluiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiit les amis com\n ment ca va");
    printf("%s\n", tab[0]);
    printf("%s\n", tab[1]);
    printf("%s\n", tab[2]);
    printf("%s\n", tab[3]);
    printf("%s\n", tab[4]);
    printf("%s\n", tab[5]);
	printf("%s\n", tab[6]);
}
