#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char num;

	num = '0' + n;
	ft_putchar_fd(num, fd);
}

