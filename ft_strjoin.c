/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehillman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 00:21:23 by ehillman          #+#    #+#             */
/*   Updated: 2020/11/01 00:21:25 by ehillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*join;
	char	*tmp;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	join = (char*)malloc(sizeof(char) * len);
	if (!join || (!s1 && !s2))
		return (NULL);
	tmp = join;
	while (*s1)
		*(tmp++) = *(s1++);
	while (*s2)
		*(tmp++) = *(s2++);
	*tmp = '\0';
	return (join);
}
