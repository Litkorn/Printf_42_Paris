/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_strchar.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 20:48:48 by cleibeng          #+#    #+#             */
/*   Updated: 2022/01/27 20:48:48 by cleibeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_put_char(unsigned char c)
{
	write(1, &c, 1);
	return (1);
}

void	ft_put_str(char *str, int *len)
{
	if (!str)
		(*len) = (*len) + write(1, "(null)", 6);
	else
		(*len) = (*len) + write(1, str, ft_strlen(str));
}
