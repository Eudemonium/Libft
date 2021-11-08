#include "libft.h"

void	ft_putnbr(int n)
{
	char num;

	num = '0' + n;
	ft_putnbr_fd(num, 1);
}

