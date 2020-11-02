/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehillman <ehillman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 01:31:14 by ehillman          #+#    #+#             */
/*   Updated: 2020/11/01 18:27:09 by ehillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strnstr(char *s1, char *s2, size_t len)
{
	size_t		i;
	size_t		j;
	size_t		g;

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
				return (s1 + i);
			if (s2[j] != s1[g])
				break ;
			j++;
			g++;
		}
		i++;
	}
	return (NULL);
}
