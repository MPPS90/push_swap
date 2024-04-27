/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_rr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 20:01:47 by mpena-so          #+#    #+#             */
/*   Updated: 2024/04/27 17:49:49 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rotate_rr(t_numbers **stack_a, t_numbers **stack_b)
{
    rotate(stack_a, 0);
    rotate(stack_b, 1);
    ft_printf("rr\n");
}