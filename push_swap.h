/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 19:47:49 by mpena-so          #+#    #+#             */
/*   Updated: 2024/05/10 23:26:15 by mpena-so         ###   ########.fr       */
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
void    swap(t_numbers **numbs, int check);
void    swap_ss(t_numbers **stack_a, t_numbers **stack_b);
void    print_content(t_numbers *numbs);
int     lst_size(t_numbers *numbs);
void    push_pa(t_numbers **stack_a, t_numbers **stack_b);
void    push_pb(t_numbers **stack_a, t_numbers **stack_b);
void    rotate(t_numbers **stack, int i);
void    rotate_rr(t_numbers **stack_a, t_numbers **stack_b);
void    reverse_rotate(t_numbers **stack);
bool repeat_digit(int argc, char *argv[]);
char	*ft_join(char *s1, char *s2);

#endif

