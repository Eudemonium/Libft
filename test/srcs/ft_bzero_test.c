#include "libft.h"
#include "libft_test.h"

#ifdef assert
#undef assert
#endif

#define assert(eval, test) \
	if (eval) ++success; else {++failure; printf("fail: n = %d\n", test); }

int	main(void)
{
	unsigned	success = 0;
	unsigned	failure = 0;
	char		*func = "ft_bzero";
	printf("===== %s =====\n", func);
	{
		int		num = 0;
		char	*expect = (char *)malloc(num);
		char	*actual = (char *)malloc(num);
		bzero(expect, num);
		ft_bzero(actual, num);
		assert(memcmp(expect, actual, num) == 0, num);
	}
	{
		int		num = 2;
		char	*expect = (char *)malloc(num);
		char	*actual = (char *)malloc(num);
		bzero(expect, num);
		ft_bzero(actual, num);
		assert(memcmp(expect, actual, num) == 0, num);
	}
	{
		int		num = 3;
		char	*expect = (char *)malloc(num);
		char	*actual = (char *)malloc(num);
		bzero(expect, num);
		ft_bzero(actual, num);
		assert(memcmp(expect, actual, num) == 0, num);
	}
	printf("%i of %i tests passed.\n", success, (success + failure));
	return (0);
}
