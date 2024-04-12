/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 15:37:14 by mpena-so          #+#    #+#             */
/*   Updated: 2023/12/13 19:22:21 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hexa(unsigned long n, int check, int *prints)
{
	char	*hexa;
	int		result;

	if (check == 'x')
	{
		hexa = "0123456789abcdef";
	}
	else
	{
		hexa = "0123456789ABCDEF";
	}
	if (n >= 16)
	{
		ft_print_hexa(n / 16, check, prints);
	}
	result = n % 16;
	ft_putchar(hexa[result], prints);
}
