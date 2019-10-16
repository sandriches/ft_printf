/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: rcorke <rcorke@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/05/02 15:58:03 by rcorke         #+#    #+#                */
/*   Updated: 2019/05/03 20:31:08 by rcorke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h> //Not allowed in the project, added for testing purposes.

int main(void)
{
	int ft_value;
	int printf_value;

	ft_value = ft_printf("titi % +---12.5% et%%%0004% et %+1%");
	printf("\t%d\n", ft_value);
	printf_value = printf("titi % +---12.5% et%%%0004% et %+1%");
	printf("\t%d\n", printf_value);
	return (1);
}
