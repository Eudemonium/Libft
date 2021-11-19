#include "libft.h"
#include "libft_test.h"

#ifdef assert
#undef assert
#endif

#define assert(eval, test) \
	if (eval) ++success; else {++failure; printf("fail: \"%c\"\n", test); }

int	main(void)
{
	unsigned	success = 0;
	unsigned	failure = 0;
	char		*func = "ft_isascii";
	printf("===== %s =====\n", func);
	{
		int		num = 000;
		int		expect = isascii(num);
		int		actual = ft_isascii(num);
		assert(expect == actual, num);
	}
	{
		int		num = INT_MIN;
		int		expect = isascii(num);
		int		actual = ft_isascii(num);
		assert(expect == actual, num);
	}
	{
		int		num = INT_MAX;
		int		expect = isascii(num);
		int		actual = ft_isascii(num);
		assert(expect == actual, num);
	}
	{
		int		num = '+';
		int		expect = isascii(num);
		int		actual = ft_isascii(num);
		assert(expect == actual, num);
	}
	{
		int		num = 'a';
		int		expect = isascii(num);
		int		actual = ft_isascii(num);
		assert(expect == actual, num);
	}
	{
		int		num = 128;
		int		expect = isascii(num);
		int		actual = ft_isascii(num);
		assert(expect == actual, num);
	}
	{
		int		num = '\n';
		int		expect = isascii(num);
		int		actual = ft_isascii(num);
		assert(expect == actual, num);
	}
	{
		int		num = '\t';
		int		expect = isascii(num);
		int		actual = ft_isascii(num);
		assert(expect == actual, num);
	}
	printf("%i of %i tests passed.\n", success, (success + failure));
	return (0);
}
