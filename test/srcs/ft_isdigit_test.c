#include "../libft.h"
#include "libft_test.h"

int	main(void)
{
	printf("###: isdigit() ft_isdigit()\n");
	printf("000: %d %d\n", isdigit(000), ft_isdigit(000));
	printf("177: %d %d\n", isdigit(177), ft_isdigit(177));
	printf("55:  %d %d\n", isdigit(55), ft_isdigit(55));
	printf("00:  %d %d\n", isdigit(00), ft_isdigit(00));
	printf("0:   %d %d\n", isdigit(0), ft_isdigit(0));
	printf("49:  %d %d\n", isdigit(49), ft_isdigit(49));
	printf("128: %d %d\n", isdigit(128), ft_isdigit(128));
	return (0);
}
