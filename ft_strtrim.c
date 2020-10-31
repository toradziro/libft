/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehillman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 00:28:02 by ehillman          #+#    #+#             */
/*   Updated: 2020/11/01 00:30:05 by ehillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_findch(char ch, const char *set);

char	*ft_strtrim(const char *s1, const char *set)
{
	int		start;
	int		end;
	char	*trim;

	start = 0;
	end = ft_strlen(s1) - 1;
	if (!s1 || !set)
		return (NULL);
	while (start <= end && ft_findch(s1[start], set))
		start++;
	while (end >= start && ft_findch(s1[end], set))
		end--;
	end++;
	trim = ft_substr(s1, start, (end - start));
	return (trim);
}

int		ft_findch(char ch, const char *set)
{
	while (*set)
	{
		if (*set == ch)
			return (1);
		set++;
	}
	return (0);
}
