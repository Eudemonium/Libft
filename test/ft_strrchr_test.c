#include "../libft.h"
#include "libft_test.h"

int	main(void)
{
	char	*p;
	char	*s = "foobar";

	p = ft_strrchr(s, 'o');
	printf("'o' in 'foobar': '%s'\n", p);
	return (0);
}
