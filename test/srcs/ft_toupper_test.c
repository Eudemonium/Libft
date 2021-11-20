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
	char		*func = "ft_toupper";
	printf("===== %s =====\n", func);
	{
		int		chr = 000;
		int		expect = toupper(chr);
		int		actual = ft_toupper(chr);
		assert(expect == actual, chr);
	}
	{
		int		chr = '0';
		int		expect = toupper(chr);
		int		actual = ft_toupper(chr);
		assert(expect == actual, chr);
	}
	{
		int		chr = 'a';
		int		expect = toupper(chr);
		int		actual = ft_toupper(chr);
		assert(expect == actual, chr);
	}
	{
		int		chr = 'H';
		int		expect = toupper(chr);
		int		actual = ft_toupper(chr);
		assert(expect == actual, chr);
	}
	{
		int		chr = 'a' - 1;
		int		expect = toupper(chr);
		int		actual = ft_toupper(chr);
		assert(expect == actual, chr);
	}
	{
		int		chr = -'0';
		int		expect = toupper(chr);
		int		actual = ft_toupper(chr);
		assert(expect == actual, chr);
	}
	{
		int		chr = 'Z';
		int		expect = toupper(chr);
		int		actual = ft_toupper(chr);
		assert(expect == actual, chr);
	}
	{
		int		chr = 'z' + 1;
		int		expect = toupper(chr);
		int		actual = ft_toupper(chr);
		assert(expect == actual, chr);
	}
	printf("%i of %i tests passed.\n", success, (success + failure));
	return (0);
}
