#include "libft.h"
#include "libft_test.h"

#ifdef assert
#undef assert
#endif

#define assert(eval, test) \
	if (eval) ++success; else {++failure; printf("fail: \"%d\"\n", test); }

int	main(void)
{
	unsigned	success = 0;
	unsigned	failure = 0;
	char		*func = "ft_itoa";
	printf("===== %s =====\n", func);
	{
		int		num = INT_MIN;
		char	*expect = INT_MIN_C;
		char	*actual = ft_itoa(num);
		assert(strcmp(expect, actual) == 0, num);
	}
	{
		int		num = INT_MAX;
		char	*expect = INT_MAX_C;
		char	*actual = ft_itoa(num);
		assert(strcmp(expect, actual) == 0, num);
	}
	{
		int		num = -42;
		char	*expect = "-42";
		char	*actual = ft_itoa(num);
		assert(strcmp(expect, actual) == 0, num);
	}
	{
		int		num = 42;
		char	*expect = "42";
		char	*actual = ft_itoa(num);
		assert(strcmp(expect, actual) == 0, num);
	}
	printf("%i of %i tests passed.\n", success, (success + failure));
	return (0);
}
