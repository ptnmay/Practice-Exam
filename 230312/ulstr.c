/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 19:35:55 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/12 20:28:03 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char a)
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
			if (av[1][i] >= 65 && av[1][i] <= 90)
				ft_putchar(av[1][i] + 32);
			else if (av[1][i] >= 97 && av[1][i] <= 122)
				ft_putchar(av[1][i] - 32);
			else
				ft_putchar(av[1][i]);
			i++;
		}
	}
	write(1, "\n", 1);
}
