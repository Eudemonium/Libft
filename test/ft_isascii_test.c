#include "libft_test.h"

int	main(void)
{
	printf("000: %d\n",isascii(000));
	printf("177: %d\n",isascii(177));
	printf("178: %d\n",isascii(178));
	printf("00: %d\n",isascii(00));
	printf("0: %d\n",isascii(0));
	printf("127: %d\n",isascii(127));
	printf("128: %d\n",isascii(128));
	return (0);
}
