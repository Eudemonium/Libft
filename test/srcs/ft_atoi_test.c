#include "../libft.h"
#include "libft_test.h"

#ifdef assert
#undef assert
#endif

#define assert(eval, test) \
	if (eval) ++success; else {++failure; printf("fail: \"%s\"\n", test); }

int	main(void)
{
	unsigned	success = 0;
	unsigned	failure = 0;
	char		*func = "ft_atoi";
	printf("===== %s =====\n", func);
	{
		char	*string = INT_MIN_C;
		int		expect = atoi(string);
		int		actual = ft_atoi(string);
		assert(expect == actual, string);
	}
	{
		char	*string = INT_MAX_C;
		int		expect = atoi(string);
		int		actual = ft_atoi(string);
		assert(expect == actual, string);
	}
	{
		char	*string = "-2147483649";
		int		expect = atoi(string);
		int		actual = ft_atoi(string);
		assert(expect == actual, string);
	}
	{
		char	*string = "2147483648";
		int		expect = atoi(string);
		int		actual = ft_atoi(string);
		assert(expect == actual, string);
	}
	{
		char	*string = "   \v-+2147483648";
		int		expect = atoi(string);
		int		actual = ft_atoi(string);
		assert(expect == actual, string);
	}
	{
		char	*string = "\t\r\n--2147483648";
		int		expect = atoi(string);
		int		actual = ft_atoi(string);
		assert(expect == actual, string);
	}
	printf("%i of %i tests passed.\n", success, (success + failure));
	return (0);
}
