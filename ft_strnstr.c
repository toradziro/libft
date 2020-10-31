/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehillman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 00:26:36 by ehillman          #+#    #+#             */
/*   Updated: 2020/11/01 00:26:37 by ehillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *s1, char *s2, size_t len)
{
	size_t		i;
	size_t		j;
	size_t		g;
	char		*res;

	if (ft_strlen(s2) == 0 || s1 == s2)
		return (s1);
	i = 0;
	while (i <= len)
	{
		g = i;
		j = 0;
		while (j <= ft_strlen(s2) && g < len)
		{
			if (s2[j] == '\0')
			{
				res = s1 + i;
				return (res);
			}
			if (s2[j] != s1[g])
				break;
			j++;
			g++;
		}
		i++;
	}
	return (NULL);
}
