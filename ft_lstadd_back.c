/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehillman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 00:17:06 by ehillman          #+#    #+#             */
/*   Updated: 2020/11/01 00:17:08 by ehillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *tmp;

	if (!(*lst))
	{
		*lst = new;
		return ;
	}
    tmp = (*lst);
    while (tmp->next != NULL)
        tmp = tmp->next;
    tmp->next = new;
}
