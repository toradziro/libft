/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehillman <ehillman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 01:31:45 by ehillman          #+#    #+#             */
/*   Updated: 2020/11/02 18:04:27 by ehillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_findch(char ch, const char *set)
{
	while (*set)
	{
		if (*set == ch)
			return (1);
		set++;
	}
	return (0);
}

char			*ft_strtrim(const char *s1, const char *set)
{
	int			start;
	int			end;
	char		*trim;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (start <= end && ft_findch(s1[start], set))
		start++;
	while (end >= start && ft_findch(s1[end], set))
		end--;
	end++;
	trim = ft_substr(s1, start, (end - start));
	return (trim);
}
