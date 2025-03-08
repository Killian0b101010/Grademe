#include <unistd.h>

int	main(int ac, char **argv)
{
	int	i;

	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (argv[1][i] != '\0')
		i++;
	while (i > 0)
	{
		i--;
		write(1, &argv[1][i], 1);
	}
	write(1, "\n", 1);
	return (0);
}
