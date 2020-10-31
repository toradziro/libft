/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehillman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 00:20:46 by ehillman          #+#    #+#             */
/*   Updated: 2020/11/01 00:20:50 by ehillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_word_len(const char *s, char c);

int     ft_word_count(const char *s, char c);

char    **ft_fill(char **str, char *s, char ch, int len);

char	**ft_split(char *s, char c)
{
    int     len;
    char    **res;

    len = ft_word_count(s, c);
    res = (char**)malloc(sizeof(char**) * len + 1);
    if (!res)
	    return (NULL);
    res = ft_fill(res, s, c, len);
    return (res);
}

int     ft_word_count(const char *s, char c)
{
    int     i;
    int     j;

    i = 0;
    j = 0;
    while (s[j])
    {
        while (s[j] == c && s[j])
            j++;
	if (!s[j])
		break;
	i++;
        while(s[j] != c && s[j])
            j++;
    }
    return (i);
}

char    **ft_fill(char **str, char *s, char ch, int len)
{
    int     i;
    int     g;

    i = 0;
    while (i < len)
    {
        while (*s == ch && *s)
            s++;
        g = ft_word_len(s, ch);
        str[i] = (char*)malloc(sizeof(char) * g + 1);
        str[i] = ft_substr(s, 0, g);
        while (*s != ch && *s)
            s++;
        i++;
    }
    str[i] = NULL;
    return (str);
}

int     ft_word_len(const char *s, char c)
{
    int     i;

    i = 0;
    while (s[i] && s[i] != c)
        i++;
    return (i);
}
