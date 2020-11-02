/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehillman <ehillman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 01:32:15 by ehillman          #+#    #+#             */
/*   Updated: 2020/11/02 18:27:59 by ehillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	int		j;
	int		i;

	if (!s)
		return (NULL);
	j = start;
	i = 0;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (!(substr = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
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
