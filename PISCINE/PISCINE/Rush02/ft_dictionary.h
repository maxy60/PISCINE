/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictionary.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 15:56:37 by bbaatar           #+#    #+#             */
/*   Updated: 2021/03/27 12:00:32 by stfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DICTIONARY_H
# define FT_DICTIONARY_H

char	*g_small_dict[101];
char	*g_big_dict[12];// le num max de characteres de valeur qu'on puisse trouver + 1 (undecillion = 11, +1 = 12);

char	*ft_dictionary_load(char *filename);

#endif
