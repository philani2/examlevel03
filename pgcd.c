#include <stdio.h>
#include <stdlib.h>

int		pgcd(int nb, int nb2)
{
	int		i;

	i = nb;
	while (i > 0)
	{
		if (nb % i == 0 && nb2 % i == 0)
			return (i);
		i--;
	}
	return (1);
}	
	int		main(int ac, char **av)
	{
		if (ac != 3)
		{
			printf("\n");
			return (0);
		}
			printf("%d\n", pgcd(atoi(av[1]), atoi(av[2])));
		return (0);
	}
