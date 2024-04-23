/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 19:55:29 by mpena-so          #+#    #+#             */
/*   Updated: 2023/12/15 16:28:46 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *string, int *prints)
{
	if (string == 0)
	{
		ft_putstr("(null)", prints);
		return ;
	}
	while (*string)
	{
		ft_putchar(*string, prints);
		string++;
	}
}
