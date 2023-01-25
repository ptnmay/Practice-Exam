#include <unistd.h>
#include <stdio.h>

int main(int ac, char **av)
{
	int i = 0;
	int j = 0;
	int k = 0;

	if (ac == 2)
	{
		while(av[1][i])
		{
			if ((av[1][i] >= 'a' && av[1][i] <= 'z') || (av[1][i] >= 'A' && av[1][i] <= 'Z'))
			{
				k = 0;
				j = av[1][i] - 'a';
				//printf("---j = %d\n", j);
				while (k <= j)
				{
					write(1, &av[1][i], 1);
					//printf("---k = %d\n", k);
					k++;
				}
			}
			i++;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
}
