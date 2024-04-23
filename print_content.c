/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_content.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 18:47:07 by mpena-so          #+#    #+#             */
/*   Updated: 2024/04/23 18:16:34 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void print_content(t_numbers *numbs)
{
    while(numbs !=NULL)
    {
        ft_printf("%d\n", numbs->numb);
        numbs = numbs->next;
    }
}