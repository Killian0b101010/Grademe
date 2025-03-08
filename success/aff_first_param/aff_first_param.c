#include <unistd.h>

int	main(int ac, char **argc)
{
	int	i;

	if (ac > 1)
	{
		i = 0;
		while (argc[1][i] != '\0')
		{
			write(1, &argc[1][i], 1);
			i++;
		}
	}
    write(1,"\n",1);
    return(0);
}
