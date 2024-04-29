/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_rr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 20:01:47 by mpena-so          #+#    #+#             */
/*   Updated: 2024/04/29 20:22:49 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rotate_rr(t_numbers **stack_a, t_numbers **stack_b)
{
    rotate(stack_a, 2);
    rotate(stack_b, 2);
    ft_printf("rr\n");
}