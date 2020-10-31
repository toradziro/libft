#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *tmp;

    tmp = malloc(sizeof(t_list));
    tmp = (*lst);
    while (tmp->next != NULL)
        tmp = tmp->next;
    tmp->next = new;
}