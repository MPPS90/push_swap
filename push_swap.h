/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 19:47:49 by mpena-so          #+#    #+#             */
/*   Updated: 2024/04/16 20:55:31 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

typedef struct s_numbers
{
    int numb;
    struct s_numbers *next;

} t_numbers;

t_numbers   *create_node(int numb);
void        add_nodo(t_numbers **numbs, t_numbers *new);
void swap(t_numbers **numbs);

#endif

