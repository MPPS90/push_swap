/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 19:55:57 by mpena-so          #+#    #+#             */
/*   Updated: 2023/12/15 09:08:46 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

void	ft_putchar(char c, int *prints);
void	ft_putnbr(int n, int *prints);
void	ft_putstr(char *string, int *prints);
int		ft_printf(char const *str, ...);
void	ft_putnbr_unsigned(unsigned int n, int *prints);
void	ft_print_hexa(unsigned long n, int check, int *prints);
void	ft_print_ptr(unsigned long ptr, int check, int *prints);

#endif
