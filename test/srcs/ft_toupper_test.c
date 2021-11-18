#include "../libft.h"
#include "libft_test.h"

int	main(int argc, char **argv)
{
	int	arg_index;
	int	c_index;

	arg_index = 1;
	if (argc >= 2)
	{
		while (arg_index < argc)
		{
			c_index = 0;
			while (argv[arg_index][c_index])
			{
				ft_putchar(ft_toupper(argv[arg_index][c_index]));
				c_index++;
			}
			ft_putchar(' ');
			arg_index++;
		}
	}
	ft_putchar('\n');
	return (0);
}
