#include "../libft.h"
#include "libft_test.h"

int	main(void)
{
	printf("test     %s INT_MIN\nft_atoi: %d\n   atoi: %d\n", INT_MIN_C, \
			ft_atoi(INT_MIN_C), atoi(INT_MIN_C));
	printf("test     %s INT_MAX\nft_atoi: %d\n   atoi: %d\n", INT_MAX_C, \
			ft_atoi(INT_MAX_C), atoi(INT_MAX_C));
	printf("test     %s INT_MIN - 1\nft_atoi: %d\n   atoi: %d\n", "-2147483649", \
			ft_atoi("-2147483649"), atoi("-2147483649"));
	printf("test     %s INT_MAX + 1\nft_atoi: %d\n   atoi: %d\n", "2147483648", \
			ft_atoi("2147483648"), atoi("2147483648"));
	printf("test     %s INT_MAX + 2\nft_atoi: %d\n   atoi: %d\n", "2147483649", \
			ft_atoi("2147483649"), atoi("2147483649"));
	return (0);
}
