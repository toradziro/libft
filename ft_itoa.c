#include "libft.h"

char	*ft_init(char *str, int n);

int		ft_len(int n);

char	*ft_itoa(int n)
{
	char *res;

    if (n == 0)
    {
        res = (char*)malloc(sizeof(char) * 2);
        res[0] = '0';
        res[1] = '\0';
        return (res);
    }
	res = (char*)malloc(sizeof(char) * (ft_len(n) + 1));
	res = ft_init(res, n);
	return (res);
}

int		ft_len(int n)
{
	int		len;

	len = 0;
	if (n > 0)
		while (n > 0)
		{
			n /= 10;
			len++;
		}
	if (n < 0)
	{
		while (n < 0)
		{
			n /= 10;
			len++;
		}
		len++;
	}
	return (len);
}

char	*ft_init(char *str, int n)
{
	int		init;

	init = ft_len(n) - 1;
	if (n < 0)
		n *= -1;
	while (n > 0)
	{
		str[init] = (n % 10) + '0';
		n /= 10;
		init--;
	}
	str[init] = '-';
	return (str);
}