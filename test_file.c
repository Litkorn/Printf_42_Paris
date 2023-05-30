/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 22:16:36 by cleibeng          #+#    #+#             */
/*   Updated: 2023/05/30 22:50:23 by cleibeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int main(void){
	char *s = "Ceci est un test";
	char c = 'd';
	void *p = NULL;
	int d = -42;

	printf("test %%c\n\n");
	printf("sortie printf:\n");
	printf("%c\n",c);
	printf("sortie ft_printf:\n");
	ft_printf("%c\n", c);
	printf("----------------------\n");

	printf("test %%s\n\n");
	printf("sortie printf:\n");
	printf("%s\n",s);
	printf("sortie ft_printf:\n");
	ft_printf("%s\n", s);
	printf("----------------------\n");

	printf("test %%p\n\n");
	printf("sortie printf:\n");
	printf("%p\n",p);
	printf("sortie ft_printf:\n");
	ft_printf("%p\n", p);
	printf("----------------------\n");

	printf("test %%d\n\n");
	printf("sortie printf:\n");
	printf("%d\n",d);
	printf("sortie ft_printf:\n");
	ft_printf("%d\n", d);
	printf("----------------------\n");

	printf("test %%i\n\n");
	printf("sortie printf:\n");
	printf("%i\n",d);
	printf("sortie ft_printf:\n");
	ft_printf("%i\n", d);
	printf("----------------------\n");

	printf("test %%u\n\n");
	printf("sortie printf:\n");
	printf("%u\n",d);
	printf("sortie ft_printf:\n");
	ft_printf("%u\n", d);
	printf("----------------------\n");

	printf("test %%x\n\n");
	printf("sortie printf:\n");
	printf("%x\n",d);
	printf("sortie ft_printf:\n");
	ft_printf("%x\n", d);
	printf("----------------------\n");

	printf("test %%X\n\n");
	printf("sortie printf:\n");
	printf("%X\n",d);
	printf("sortie ft_printf:\n");
	ft_printf("%X\n", d);
	printf("----------------------\n");

	printf("test %%%%\n\n");
	printf("sortie printf:\n");
	printf("%%\n");
	printf("sortie ft_printf:\n");
	ft_printf("%%\n");

	return (1);
}
