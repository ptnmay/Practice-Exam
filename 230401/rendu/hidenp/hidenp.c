#include <unistd.h>

int main(int ac, char **av)
{
	if (ac == 3)
	{
		int i = 0;
		int j = 0;
		int len1 = 0;
		while(av[1][len1])
			len1++;
		while(av[2][j])
		{
			if (av[1][i] == av[2][j])
				i++;
			j++;
		}
		char one = '1';
		char z = '0';
		if (len1 == i)
			write(1, &one, 1);
		else
			write(1, &z, 1);
	}
	write(1, "\n", 1);
}
