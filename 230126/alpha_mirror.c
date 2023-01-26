/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 20:30:44 by psaeyang          #+#    #+#             */
/*   Updated: 2023/01/26 20:53:56 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char a)
{
	write(1, &a, 1);
}

int main(int ac, char **av)
{
	int i = 0;

	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				av[1][i] = 'a' + 'z' - av[1][i];
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				av[1][i] = 'A' + 'Z' - av[1][i];
			ft_putchar(av[1][i]);
			i++;
		}
	}
	write(1, "\n", 1);
}
