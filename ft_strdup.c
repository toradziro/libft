/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehillman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 00:21:14 by ehillman          #+#    #+#             */
/*   Updated: 2020/11/01 00:21:15 by ehillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*res;
	int		i;
	int		size;

	i = 0;
	size = ft_strlen(str);
	res = (char*)malloc(sizeof(char) * (size + 1));
	if (!res)
		return (NULL);
	while (i < size)
	{
		res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
