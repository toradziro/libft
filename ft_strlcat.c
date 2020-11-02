/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehillman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 01:29:00 by ehillman          #+#    #+#             */
/*   Updated: 2020/11/01 01:29:01 by ehillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d_len;
	size_t	i;

	d_len = 0;
	i = 0;
	while (dst[d_len] && d_len < size)
		d_len++;
	while ((d_len + i + 1 < size) && (src[i]))
	{
		dst[d_len + i] = src[i];
		i++;
	}
	if (d_len != size)
		dst[d_len + i] = '\0';
	return (ft_strlen(src) + d_len);
}
