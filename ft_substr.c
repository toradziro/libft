/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehillman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 00:30:15 by ehillman          #+#    #+#             */
/*   Updated: 2020/11/01 00:30:16 by ehillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	int		j;
	int		i;

	j = start;
	i = 0;
	substr = (char*)malloc(sizeof(char) * len + 1);
	if (!substr || !s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	while (len > 0 && s[j])
	{
		substr[i] = s[j];
		j++;
		i++;
		len--;
	}
	substr[i] = '\0';
	return (substr);
}
