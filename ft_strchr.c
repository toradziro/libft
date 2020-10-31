/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehillman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 00:20:59 by ehillman          #+#    #+#             */
/*   Updated: 2020/11/01 00:21:06 by ehillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *str, int num)
{
	char	*res;

	res = str;
	while (*res != num)
	{
		if (*res == '\0')
		{
			return (NULL);
		}
		res++;
	}
	return (res);
}
