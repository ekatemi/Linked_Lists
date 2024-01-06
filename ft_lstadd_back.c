/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emikhayl <emikhayl@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 19:00:22 by emikhayl          #+#    #+#             */
/*   Updated: 2024/01/06 19:00:27 by emikhayl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{ 
    t_list *last;

    if (*lst == NULL)
    {
        *lst = new;
        new->next = NULL;
    }
    else
    {
    last = ft_lstlast(*lst);
    last->next = new;
    }
}