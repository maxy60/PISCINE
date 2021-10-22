/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 16:08:03 by msainton          #+#    #+#             */
/*   Updated: 2021/06/07 11:00:15 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int        ft_charset(char c)
{
    return (c == ' ' || c == '\t' || c == '\n');
}

int        ft_sizeof_word(char *str)
{
    int        size;

    size = 0;
    while (*str && !ft_charset(*str))
    {
        ++size;
        ++str;
    }
    return (size);
}

int        ft_count_word(char *str)
{
    int        words;
    int        state;

    words = 0;
    state = 1;
    while (*str)
    {
        if (ft_charset(*str))
            state = 1;
        else
        {
            if (state == 1)
                ++words;
            state = 0;
        }
        ++str;
    }
    return (words);
}

char    **ft_split(char *str)
{
    int        index;
    int        i;
    int        words;
    char     **ret;

    words = ft_count_word(str);
    ret = (char **)malloc(sizeof(char *) * words + 1);
    index = -1;
    while (++index < words)
    {
        while (*str && ft_charset(*str))
            ++str;
        ret[index] = (char *)malloc(sizeof(char) * ft_sizeof_word(str) + 1);
        i = 0;
        while (*str && !ft_charset(*str))
            ret[index][i++] = *str++;
        ret[index][i] = 0;
    }
    ret[index] = 0;
    return (ret);
}
