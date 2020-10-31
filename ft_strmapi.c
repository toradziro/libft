/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehillman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 00:26:10 by ehillman          #+#    #+#             */
/*   Updated: 2020/11/01 00:26:11 by ehillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	unsigned int	i;

	i = 0;
	res = (char*)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!res || !f)
		return (NULL);
	while (s[i] != '\0')
	{
		res[i] = (f)(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
