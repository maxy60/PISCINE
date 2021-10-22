/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 12:19:45 by msainton          #+#    #+#             */
/*   Updated: 2021/02/21 15:41:18 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

void	destructuration(unsigned long long nb);
char	*strstr(char *str, char *to_find);
int	ft_str_is_numeric(char *str);
int	parse();
unsigned long long int	ft_atoi(char *str);
void	reverse_str(char str[], int size);
char	*ft_itoa(unsigned long long int nb, char *str);
char	ft_strlen(char *str);
void	ft_putstr(char *str);
void	ft_putchar(char c);
int	main(int argc, char **argv);
#endif 
