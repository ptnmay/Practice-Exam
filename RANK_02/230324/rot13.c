/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot13.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 20:15:14 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/25 01:24:27 by psaeyang         ###   ########.fr       */
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
			if (av[1][i] >= 'a' && av[1][i] <= 'm')
				ft_putchar(av[1][i] + 13);
			else if (av[1][i] > 'm' && av[1][i] <= 'z')
				ft_putchar(av[1][i] - 13);
			else if (av[1][i] >= 'A' && av[1][i] <= 'M')
				ft_putchar(av[1][i] + 13);
			else if (av[1][i] > 'M' && av[1][i] <= 'Z')
				ft_putchar(av[1][i] - 13);
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
