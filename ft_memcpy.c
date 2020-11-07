/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehillman <ehillman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 01:25:21 by ehillman          #+#    #+#             */
/*   Updated: 2020/11/07 14:41:14 by ehillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp1;
	unsigned char	*tmp2;
	size_t			i;

	tmp1 = (unsigned char*)dest;
	tmp2 = (unsigned char*)src;
	i = 0;
	if (!tmp1 && !tmp2)
		return (NULL);
	while (i < n)
	{
		tmp1[i] = tmp2[i];
		i++;
	}
	return (dest);
}
