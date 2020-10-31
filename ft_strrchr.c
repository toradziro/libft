/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehillman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 00:27:49 by ehillman          #+#    #+#             */
/*   Updated: 2020/11/01 00:27:50 by ehillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int ch)
{
	int	len;

	len = ft_strlen(str);
	while (len >= 0)
	{
		if (*(str + len) == (char)ch)
			return (str + len);
		len--;
	}
	return (NULL);
}
