#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
		write (1, '-', 1);
	if (n >= 10)
		ft_putnbr(n / 10, fd);
	ft_putchar((n % 10) + '0', fd);
}
