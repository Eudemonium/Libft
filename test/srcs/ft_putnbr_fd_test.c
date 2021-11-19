#include "../libft.h"
#include "libft_test.h"

int	main(void)
{
	ft_putnbr_fd(0, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(-42, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(INT_MAX + 1, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(INT_MIN - 1, 1);
	ft_putchar_fd('\n', 1);
	return (0);
}