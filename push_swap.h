/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 19:47:49 by mpena-so          #+#    #+#             */
/*   Updated: 2024/04/22 23:30:30 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdbool.h>

typedef struct s_numbers
{
    int numb;
    struct s_numbers *next;

} t_numbers;

t_numbers   *create_node(int numb);
void    add_nodo(t_numbers **numbs, t_numbers *new);
void    swap(t_numbers **numbs, bool check);
void    print_content(t_numbers *numbs);
int lst_size(t_numbers *numbs);
void    push_pa(t_numbers **stack_a, t_numbers **stack_b);
void    push_pb(t_numbers **stack_a, t_numbers **stack_b);
void    rotate(t_numbers **stack_a);

#endif

