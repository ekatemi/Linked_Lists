/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emikhayl <emikhayl@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 17:38:43 by emikhayl          #+#    #+#             */
/*   Updated: 2024/01/06 17:38:49 by emikhayl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void ft_lstadd_front(t_list **lst, t_list *new)
{ 
    new->next = *lst;
    *lst = new;
}

int main()
{
    int n = 10;
    int n1 = 12;
    t_list *list = NULL;
    
    t_list *new = ft_lstnew(&n);
    t_list *new1 = ft_lstnew(&n1);

    ft_lstadd_front(&list, new);
    ft_lstadd_front(&list, new1);
    t_list *current = list;
    while(current != NULL)
    {
        printf("%d\n", *((int *)(current->content)));
        current = current->next;
    }

    int size = ft_lstsize(list);
    printf("%d\n", size);
    return 0;
}