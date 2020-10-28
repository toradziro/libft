#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*s;

	s = ft_itoa(n);
	ft_putstr_fd(s, fd);
}

int main ()
{
	ft_putnbr_fd(100, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(-100, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(0, 1);
	write(1, "\n", 1);
}