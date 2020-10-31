/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehillman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 00:01:13 by ehillman          #+#    #+#             */
/*   Updated: 2020/11/01 00:01:17 by ehillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstnew(void *content)
{
    t_list  *new_node;
    new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
    new_node->content = content;
    new_node->next = NULL;
    return (new_node);
}
