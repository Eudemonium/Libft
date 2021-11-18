#include "../libft.h"
#include "libft_test.h"

int	main(void)
{
	char *str;
	str = ft_itoa(4200);
	ft_putstr("Result: ");
	ft_putstr(str);
	ft_putchar('\n');
	str = ft_itoa(-42);
	ft_putstr("Result: ");
	ft_putstr(str);
	ft_putchar('\n');
	return (0);
}
