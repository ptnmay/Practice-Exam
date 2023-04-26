/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 01:25:08 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/13 01:36:37 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int ac, char **av)
{
	int i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 65 && av[1][i] <= 90)
			{
				int m = 0;
				int n = av[1][i] - 'A';
				while (m <= n)
				{
					write(1, &av[1][i], 1);
					m++;
				}
			}
			else if (av[1][i] >= 97 && av[1][i] <= 122)
			{
				int x = 0;
				int v = av[1][i] - 'a';
				while(x <= v)
				{
					write(1, &av[1][i], 1);
					x++;
				}
			}
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
