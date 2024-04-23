/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 18:13:02 by mpena-so          #+#    #+#             */
/*   Updated: 2024/04/23 19:04:17 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	prints(char c, va_list args, int *puntero)
{
	if (c == '%')
		ft_putchar('%', puntero);
	else if (c == 'c')
		ft_putchar(va_arg(args, int), puntero);
	else if (c == 'd' || c == 'i' )
		ft_putnbr(va_arg(args, int), puntero);
	else if (c == 's')
		ft_putstr(va_arg(args, char *), puntero);
	else if (c == 'u')
		ft_putnbr_unsigned(va_arg(args, unsigned int), puntero);
	else if (c == 'X')
		ft_print_hexa(va_arg(args, unsigned int), 'X', puntero);
	else if (c == 'x')
		ft_print_hexa(va_arg(args, unsigned int), 'x', puntero);
	else if (c == 'p')
		ft_print_ptr(va_arg(args, unsigned long), 'x', puntero);
}

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		numb_prints;

	va_start(args, str);
	numb_prints = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			prints(*str, args, &numb_prints);
		}
		else
			ft_putchar(*str, &numb_prints);
		str++;
	}
	va_end(args);
	return (numb_prints);
}
