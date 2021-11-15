#include "../libft.h"
#include "libft_test.h"

int	main(void)
{
	printf("###: isascii() ft_isascii\n");
	printf("000: %d %d\n", isascii(000), ft_isascii(000));
	printf("177: %d %d\n", isascii(177), ft_isascii(177));
	printf("178: %d %d\n", isascii(178), ft_isascii(178));
	printf("00:  %d %d\n", isascii(00), ft_isascii(00));
	printf("0:   %d %d\n", isascii(0), ft_isascii(0));
	printf("127: %d %d\n", isascii(127), ft_isascii(127));
	printf("128: %d %d\n", isascii(128), ft_isascii(128));
	return (0);
}
