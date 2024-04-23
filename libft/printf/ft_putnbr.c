/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 19:56:15 by mpena-so          #+#    #+#             */
/*   Updated: 2024/04/23 19:04:28 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_putnbr(int n, int *prints)
{
	int		result;
	long	n_long;

	n_long = (long)n;
	if (n_long < 0)
	{
		ft_putchar('-', prints);
		n_long = n_long * -1;
	}
	if (n_long > 9)
	{
		ft_putnbr(n_long / 10, prints);
	}
	result = (n_long % 10) + 48;
	ft_putchar(result, prints);
}

void	ft_putnbr_unsigned(unsigned int n, int *prints)
{
	int		result;

	if (n > 9)
	{
		ft_putnbr_unsigned(n / 10, prints);
	}
	result = n % 10 + 48;
	write(1, &result, 1);
	(*prints)++;
}
