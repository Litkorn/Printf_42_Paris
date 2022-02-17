/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libprintf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 18:24:20 by cleibeng          #+#    #+#             */
/*   Updated: 2022/01/21 18:24:20 by cleibeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdio.h>
# include <limits.h>
# include <stdarg.h>
# include <unistd.h>

typedef long long unsigned int	t_llui;

int	ft_put_char(unsigned char c);
void	ft_put_convert(char c, unsigned int nb, int *len);
void	ft_convert_dec(long long int nb, int *len);
void	ft_put_pointer(intptr_t nb, int *len);
void	ft_put_str(char *str, int *len);
size_t	ft_strlen(const char *s);

#endif
