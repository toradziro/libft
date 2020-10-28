#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	int		j;
	int		i;

	j = start;
	i = 0;
	substr = (char*)malloc(sizeof(char) * len + 1);
	if (!substr)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		substr[i] = '\0';
		return (substr);
	}
	while (len > 0 && s[j] != '\0')
	{
		substr[i] = s[j];
		j++;
		i++;
		len--;
	}
	substr[i] = '\0';
	return (substr);
}