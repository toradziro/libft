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
	while (s1[start] && ft_findch(s1[start], set))
		start++;
	while (s1[end] && ft_findch(s1[end], set))
		end--;
	end++;
	trim = ft_substr(s1, start, (end - start));
	if ((size_t)start == ft_strlen(s1))
		trim = "\0";
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