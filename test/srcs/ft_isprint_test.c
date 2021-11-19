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
	char		*func = "ft_isprint";
	printf("===== %s =====\n", func);
	{
		int		num = 000;
		int		expect = isprint(num);
		int		actual = ft_isprint(num);
		assert(expect == actual, num);
	}
	{
		int		num = INT_MIN;
		int		expect = isprint(num);
		int		actual = ft_isprint(num);
		assert(expect == actual, num);
	}
	{
		int		num = INT_MAX;
		int		expect = isprint(num);
		int		actual = ft_isprint(num);
		assert(expect == actual, num);
	}
	{
		int		num = 12;
		int		expect = isprint(num);
		int		actual = ft_isprint(num);
		assert(expect == actual, num);
	}
	{
		int		num = 'a';
		int		expect = isprint(num);
		int		actual = ft_isprint(num);
		assert(expect == actual, num);
	}
	{
		int		num = 128;
		int		expect = isprint(num);
		int		actual = ft_isprint(num);
		assert(expect == actual, num);
	}
	{
		int		num = -42;
		int		expect = isprint(num);
		int		actual = ft_isprint(num);
		assert(expect == actual, num);
	}
	{
		int		num = '\t';
		int		expect = isprint(num);
		int		actual = ft_isprint(num);
		assert(expect == actual, num);
	}
	printf("%i of %i tests passed.\n", success, (success + failure));
	return (0);
}
