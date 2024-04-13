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

#endif

