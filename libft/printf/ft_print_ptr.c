/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 18:08:26 by mpena-so          #+#    #+#             */
/*   Updated: 2024/04/23 19:04:07 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_print_ptr(unsigned long ptr, int check, int *prints)
{
	ft_putstr("0x", prints);
	ft_print_hexa(ptr, check, prints);
}
