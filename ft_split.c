#include "libft.h"
#include <stdio.h> //УДАЛИТЬ
//бежим по строке, пропускаем разделители и считаем количество слов

int     ft_word_len(const char *s, char c);

int     ft_word_count(const char *s, char c);

char    **ft_fill(char **str, char *s, char ch);

char	**ft_split(char *s, char c)
{
    int     len;
    char    **res;

    len = ft_word_count(s, c);
    res = (char**)malloc(sizeof(char**) * len + 1);
    res = ft_fill(res, s, c);
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
        while (*s == c && s[j])
            j++;
        i++;
        while(*s != c && s[j])
            j++;
    }
    return (i);
}

char    **ft_fill(char **str, char *s, char ch)
{
    int     i;
    int     g;

    i = 0;
    while (*s)
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

int main() //УДАЛИТЬ
{
	char *str = "pls    SPLIT    THIS    !    ";
	char **str_s = ft_split(str, ' ');
	while (*str_s)
	{
		printf("%s\n", *str_s);
		str_s++;
	}
}
