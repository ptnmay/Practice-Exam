#include <unistd.h>
#include <stdio.h>

//tliangso help

void	ft_putchr(char c)
{
	write(1, &c, 1);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		char *str = av[1];

		while (*str)
		{
			if (*str < 'A' || (*str > 'Z' && *str < 'a') || *str > 'z')
				ft_putchr(*str);
			else if (*str > 'M' && *str <= 'Z' || *str > 'm')
				ft_putchr(*str + 13 - 26);
			else
				ft_putchr(*str + 13);
			str++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
