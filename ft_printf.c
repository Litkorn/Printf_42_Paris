/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 14:56:09 by cleibeng          #+#    #+#             */
/*   Updated: 2022/01/17 14:56:09 by cleibeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_conversion(va_list list_str, int *len, char c)
{
	if (c == 'c')
		ft_put_char(va_arg(list_str, int), len);
	if (c == 's')
		ft_put_str(va_arg(list_str, char *), len);
	if (c == 'p')
		ft_put_pointer(va_arg(list_str, intptr_t), len);
	if (c == 'd' || c == 'i')
		ft_convert_dec(va_arg(list_str, int), len);
	if (c == 'x' || c == 'X' || c == 'u')
		ft_put_convert(c, va_arg(list_str, unsigned int), len);
	if (c == '%')
		(*len) = (*len) + write(1, "%", 1);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	list_str;

	len = 0;
	i = 0;
	va_start(list_str, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			ft_conversion(list_str, &len, str[i]);
		}
		else
			ft_put_char(str[i], &len);
		i++;
	}
	va_end(list_str);
	return (len);
}
/*
int	main(void)
{
	char	*str = '\0';
	printf("%d\n", ft_printf("ok%X%s%%\n", 2012, str));
	printf("%d\n", printf("ok%X%s%%\n", 2012, str));
	return (1);
}*/