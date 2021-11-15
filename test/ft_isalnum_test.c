#include "../libft.h"
#include "libft_test.h"

int	main(void)
{
	printf("###: isalnum() ft_isalnum()\n");
	printf("000: %d %d\n", isalnum(000), ft_isalnum(000));
	printf("177: %d %d\n", isalnum(177), ft_isalnum(177));
	printf("55:  %d %d\n", isalnum(55), ft_isalnum(55));
	printf("00:  %d %d\n", isalnum(00), ft_isalnum(00));
	printf("0:   %d %d\n", isalnum(0), ft_isalnum(0));
	printf("49:  %d %d\n", isalnum(49), ft_isalnum(49));
	printf("128: %d %d\n", isalnum(128), ft_isalnum(128));
	return (0);
}
