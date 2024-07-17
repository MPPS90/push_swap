/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_content.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 18:47:07 by mpena-so          #+#    #+#             */
/*   Updated: 2024/07/17 21:24:50 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void print_content(t_numbers *numbs)
{
    ft_printf("==============\n");
    while(numbs !=NULL)
    {
        ft_printf("%d\n", numbs->numb);
        //ft_printf("Índice: %d\n", numbs->index);
        numbs = numbs->next;
    }
    ft_printf("==============\n");
}