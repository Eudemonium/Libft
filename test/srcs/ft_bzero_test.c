#include "../libft.h"
#include "libft_test.h"

int	main(void)
{
	int		*num;
	char	*chr;
	int		index;

	num = (int *)malloc(sizeof(int) * 3);
	index = 0;
	while (index < 3)
	{
		num[index++] = 3;
	}
	printf("%d %d %d\n", num[0], num[1], num[2]);
	ft_bzero(num, sizeof(int) * 3);
	printf("%d %d %d\n", num[0], num[1], num[2]);
	chr = (char *)malloc(4);
	chr[3] = '\0';
	ft_memset(chr, 42, 3);
	printf("%d %d %d\n", chr[0], chr[1], chr[2]);
	ft_bzero(chr, 3);
	printf("%d %d %d\n", chr[0], chr[1], chr[2]);
	return (0);
}
