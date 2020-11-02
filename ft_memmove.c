/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehillman <ehillman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 01:25:39 by ehillman          #+#    #+#             */
/*   Updated: 2020/11/01 18:06:01 by ehillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *str, size_t num)
{
	unsigned char	*tmp;
	unsigned char	*tmp1;

	tmp = (unsigned char*)dest;
	tmp1 = (unsigned char*)str;
	if (!str && !dest)
		return (dest);
	if (dest > str)
		while (num--)
			*(tmp + num) = *(tmp1 + num);
	else
	{
		while (num--)
			*(tmp++) = *(tmp1++);
	}
	return (dest);
}
