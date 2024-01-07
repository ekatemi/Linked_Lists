#include "libft.h"

// Deletes and frees the given node and every successor of that node, using the function ’del’ and free(3).
//Finally, the pointer to the list must be set to NULL.

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    while(*lst != NULL)
        {
            t_list *temp = *lst;
            *lst = (*lst)->next;
            (*del)(temp->content);
            free(temp);
        }
    *lst = NULL;
}