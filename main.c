#include "push_swap.h"

int check_digit(char *str)
{
    int i;
    int numb;

    i = 0;
    if(str[i] == '-')
        i++;
    while(str[i])
    {
        numb = ft_isdigit(str[i]);
        if(numb == 0)
            return 1;
        i++;
    }
    return 0;
}


int main(int argc, char*argv[])
{
    int i;
    int j;
    char    **sub_s;
    t_numbers  *stack;
    t_numbers   *new_node;
    //int numb;

    stack = NULL;
    i = 1;
    if(argc <= 2)
        return 1;
    while (argv[i])
    {
        sub_s = ft_split(argv[i], ' ');
        j = 0;
        while(sub_s[j])
        {
            ft_printf("%s\n", sub_s[j]);
            if(check_digit(sub_s[j]) == 1)
            {
                free(sub_s[j]);
                free(sub_s);
                ft_printf("Error\n");
                return (1);
            }
            if(ft_atol(sub_s[j])> 2147483647 || ft_atol(sub_s[j]) < -2147483648)
            {
                free(sub_s[j]);
                free(sub_s);
                ft_printf("Error\n");
            }
            //free(sub_s[j]);
            new_node = create_node(ft_atol(sub_s[j]));
            ft_printf("contenido new_nodo %d\n", new_node->numb);
            if(new_node == NULL)
            {
                free(sub_s[j]);
                free(sub_s);
                printf("Error\n");
                exit(1);
            }
            ft_printf("antes de comprobar contenido nodo\n");
            add_check_nodo(&stack, new_node);
            ft_printf("pruebissss\n");
            j++;
        }
        //ft_printf("comprobando i: %d\n", i);
        free(sub_s);
        i++;
    }
    return 0;
}
