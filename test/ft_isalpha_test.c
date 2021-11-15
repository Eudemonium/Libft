#include "../libft.h"
#include "libft_test.h"

int	main(void)
{
	printf("###: isalpha() ft_isalpha()\n");
	printf("000: %d %d\n", isalpha(000), ft_isalpha(000));
	printf("177: %d %d\n", isalpha(177), ft_isalpha(177));
	printf("55:  %d %d\n", isalpha(55), ft_isalpha(55));
	printf("65:  %d %d\n", isalpha(65), ft_isalpha(65));
	printf("0:   %d %d\n", isalpha(0), ft_isalpha(0));
	printf("49:  %d %d\n", isalpha(49), ft_isalpha(49));
	printf("112: %d %d\n", isalpha(112), ft_isalpha(112));
	return (0);
}
