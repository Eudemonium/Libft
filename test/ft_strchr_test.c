#include "../libft.h"
#include "libft_test.h"

int	main(void)
{
	char	*p;
	char	*s = "foobar";

	p = ft_strchr(s, 'b');
	printf("'b' in 'foobar': '%s'\n", p);
	return (0);
}
