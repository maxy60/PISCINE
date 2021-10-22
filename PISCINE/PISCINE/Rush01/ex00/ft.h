/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 10:03:47 by bbrassar          #+#    #+#             */
/*   Updated: 2021/02/13 15:43:52 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

unsigned int	*ft_parsegrid(unsigned int size, char *str);

unsigned int	ft_strlen(char *str);

int				ft_isspace(char c);

int				ft_isnumeric(char c);

void			ft_putchar(char c);

void			ft_puterr(char *err);

unsigned int	ft_sqrt(unsigned int i);

void			ft_tab(unsigned int **tab, unsigned int size);

unsigned int	**ft_fill(unsigned int size, unsigned int *grid);

#endif
