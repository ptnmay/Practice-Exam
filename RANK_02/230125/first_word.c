#include <unistd.h>
#include <stdio.h>

int main(int ac, char **av)
{
	int j = 0;

	if (ac == 2)
	{
		while (av[1][j])
		{
			if ((av[1][j] >= 9 && av[1][j] <= 13) || av[1][j] == 32)
				j++;
			else
			{
				write(1, &av[1][j], 1);
				j++;
				if ((av[1][j] >= 9 && av[1][j] <= 13) || av[1][j] == 32)
				{
						//write(1, "\n", 1);
						break;
				}
			}
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
}
