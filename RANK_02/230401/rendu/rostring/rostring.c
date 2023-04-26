#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char *first_word(char *s)
{
	int i = 0;
	int j = 0;
	char *res;
	while(s[i])
	{
		if (s[i] == '\t' || s[i] == 32)
			i++;
		if (s[i] > 33)
		{
			res[j] = s[i];
			j++;
			i++;
		}
		if (s[i] == '\t' || s[i] == 32)
			break ;
	}
	res[j] = '\0';
	return(res);
}

void ft_putstr(char *s)
{
	int i = 0;

	while(s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac > 1)
	{
		int i = 1;
		int j = 0;

		while(av[i])
		{
			char *f = first_word(av[i]);
			int lenf = 0;
			while(f[lenf])
				lenf++;
			while(av[i][lenf])
			{
				if(av[i][lenf] == '\t' || av[i][lenf] == 32)
					lenf++;
				write(1, &av[i][lenf], 1);
				lenf++;
			}
			write(1, " ", 1);
			ft_putstr(f);
			i++;
		}
	}
	write(1, "\n", 1);

}
