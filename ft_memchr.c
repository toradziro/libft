/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehillman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 00:18:30 by ehillman          #+#    #+#             */
/*   Updated: 2020/11/01 00:18:31 by ehillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = (unsigned char*)str;
	while (i < n)
	{
		if (s[i] == (unsigned char)c)
			return ((void*)str + i);
		i++;
	}
	return (NULL);
}
