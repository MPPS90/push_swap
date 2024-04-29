/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_ss.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 19:46:30 by mpena-so          #+#    #+#             */
/*   Updated: 2024/04/29 20:32:12 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap_ss(t_numbers **stack_a, t_numbers **stack_b)
{
    swap(stack_a, 2);
    swap(stack_b, 2);
    printf("ss\n");
}