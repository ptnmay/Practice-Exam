#include <unistd.h>
#include <stdio.h>

int main(int ac, char **av)
{
	int i = 0;

	if (ac == 2)
	{
		while (av[1][i])
		{
			i++;
		}
		while (i--)
		{
			write(1, &av[1][i], 1);
		}
	}
	else
		write(1, "\n", 1);
}
