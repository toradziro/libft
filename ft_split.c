#include "libft.h"
//#include <stdio.h> //УДАЛИТЬ
int		ft_count_space(char *s, char c);

char	**ft_mem_for_str(char *s, char c, char **res);

char	**ft_fill(char *s, char c, char **res);

char	**ft_split(char *s, char c)
{
	char	**res;
	int		len_1;

	len_1 = ft_count_space(s, c);
	if (len_1 == 0)
		return (NULL);
	res = (char**)malloc(sizeof(char*) * (len_1 + 2));
	if (!res)
	    return (NULL);
	res = ft_mem_for_str(s, c, res);
	res = ft_fill(s, c, res);
	return (res);
}

char	**ft_fill(char *s, char c, char **res)
{
	int		i;
	int     g;

	i = 0;
	g = 0;
	while (*s)
	{
	    if (s[g] == c)
		{
			res[i] = ft_substr(s, 0, g);
			i++;
			g = -1;
			while (*s != c && *s)
				s++;
			if (*s)
				s++;
		}
		g++;
	}
	return (res);
}

int		ft_count_space(char *s, char c)
{
	int		count;

	count = 0;
	while (*s)
	{
		if (*s == c)
			count++;
		s++;
	}
	return (count);
}

char	**ft_mem_for_str(char *s, char c, char **res)
{
	int		count;
	int		index;
	int		i;

	count = 0;
	index = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			res[index] = ft_calloc(count + 1, sizeof(char));
			index++;
			count = 0;
		}
		else
	       	count++;
		i++;
	}
	res[index] = ft_calloc(count + 1, sizeof(char));
	res[index + 1] = NULL;
	return (res);
}
/*int main() //УДАЛИТЬ
{
	char *str = "pls    SPLIT    THIS    !    ";
	char **str_s = ft_split(str, ' ');
	while (*str_s)
	{
		printf("%s\n", *str_s);
		str_s++;
	}
} */
