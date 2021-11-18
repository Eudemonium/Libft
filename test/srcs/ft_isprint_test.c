#include "libft_test.h"
#include "../libft.h"

int	main(void)
{
	printf("00\n   isprint: %d\nft_isprint: %d\n", isprint(00), ft_isprint(00));
	printf("12\n   isprint: %d\nft_isprint: %d\n", isprint(12), ft_isprint(12));
	printf("125\n   isprint: %d\nft_isprint: %d\n", isprint(125), ft_isprint(125));
	printf("5\n   isprint: %d\nft_isprint: %d\n", isprint(5), ft_isprint(5));
	printf("24\n   isprint: %d\nft_isprint: %d\n", isprint(24), ft_isprint(24));
	printf("-42\n   isprint: %d\nft_isprint: %d\n", isprint(-42), ft_isprint(-42));
	return (0);
}
