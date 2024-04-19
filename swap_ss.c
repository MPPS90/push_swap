/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_ss.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 19:46:30 by mpena-so          #+#    #+#             */
/*   Updated: 2024/04/19 19:50:34 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap_ss(t_numbers **stack_a, t_numbers **stack_b)
{
    swap(stack_a, 0);
    swap(stack_b, 1);
    printf("ss\n");
}