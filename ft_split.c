/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehillman <ehillman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 18:26:15 by ehillman          #+#    #+#             */
/*   Updated: 2020/11/07 15:23:16 by ehillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_word_len(const char *s, char c)
{
	int			i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static int		ft_word_count(const char *s, char c)
{
	int			i;
	int			j;

	i = 0;
	j = 0;
	while (s[j])
	{
		while (s[j] == c && s[j])
			j++;
		if (!s[j])
			break ;
		i++;
		while (s[j] != c && s[j])
			j++;
	}
	return (i);
}

static void		ft_clearsplit(char **str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

static char		**ft_fill(char **str, char *s, char ch, int len)
{
	int			i;
	int			g;

	i = 0;
	while (i < len)
	{
		while (*s == ch && *s)
			s++;
		g = ft_word_len(s, ch);
		str[i] = ft_substr(s, 0, g);
		if (!str[i])
		{
			ft_clearsplit(str);
			return (NULL);
		}
		while (*s != ch && *s)
			s++;
		i++;
	}
	str[i] = NULL;
	return (str);
}

char			**ft_split(char *s, char c)
{
	int			len;
	char		**res;

	if (!s)
		return (NULL);
	len = ft_word_count(s, c);
	if (!(res = (char**)malloc(sizeof(char*) * (len + 1))))
		return (NULL);
	res = ft_fill(res, s, c, len);
	return (res);
}
