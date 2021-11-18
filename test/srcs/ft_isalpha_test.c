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
	char		*func = "ft_isalpha";
	printf("===== %s =====\n", func);
	{
		int		num = 000;
		int		expect = isalpha(num);
		int		actual = ft_isalpha(num);
		assert(expect == actual, num);
	}
	{
		int		num = '0';
		int		expect = isalpha(num);
		int		actual = ft_isalpha(num);
		assert(expect == actual, num);
	}
	{
		int		num = '9';
		int		expect = isalpha(num);
		int		actual = ft_isalpha(num);
		assert(expect == actual, num);
	}
	{
		int		num = '+';
		int		expect = isalpha(num);
		int		actual = ft_isalpha(num);
		assert(expect == actual, num);
	}
	{
		int		num = 'a' - 1;
		int		expect = isalpha(num);
		int		actual = ft_isalpha(num);
		assert(expect == actual, num);
	}
	{
		int		num = -'0';
		int		expect = isalpha(num);
		int		actual = ft_isalpha(num);
		assert(expect == actual, num);
	}
	{
		int		num = 'z';
		int		expect = isalpha(num);
		int		actual = ft_isalpha(num);
		assert(expect == actual, num);
	}
	{
		int		num = 'z' + 1;
		int		expect = isalpha(num);
		int		actual = ft_isalpha(num);
		assert(expect == actual, num);
	}
	printf("%i of %i tests passed.\n", success, (success + failure));
	return (0);
}