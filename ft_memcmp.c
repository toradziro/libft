/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehillman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 00:18:40 by ehillman          #+#    #+#             */
/*   Updated: 2020/11/01 00:18:41 by ehillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	
	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	while (n && *str1 == *str2)
	{
		str1++;
		str2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*str1 - *str2);
}
