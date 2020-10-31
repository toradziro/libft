/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehillman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 00:19:30 by ehillman          #+#    #+#             */
/*   Updated: 2020/11/01 00:19:31 by ehillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	size_t i;
	unsigned char *str;

	i = 0;
	str = (unsigned char*)dest;
	while (i < n)
	{
		*str = c;
		str++;
		i++;
	}
	return (dest);
}
