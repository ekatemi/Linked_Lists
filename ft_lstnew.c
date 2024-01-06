/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emikhayl <emikhayl@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 22:59:28 by emikhayl          #+#    #+#             */
/*   Updated: 2023/09/26 23:07:24 by emikhayl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allocates (with malloc(3)) and returns a new node. The member variable 
’content’ is initialized with the value of the parameter ’content’. 
The variable ’next’ is initialized to NULL.*/
#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);	
	new_node->content = content;
	new_node->next = NULL;
	return new_node;
}
