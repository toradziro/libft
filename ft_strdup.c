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