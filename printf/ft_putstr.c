/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 19:55:29 by mpena-so          #+#    #+#             */
/*   Updated: 2024/03/24 17:12:02 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

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
