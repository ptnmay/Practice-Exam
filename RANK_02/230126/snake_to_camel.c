/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 01:21:23 by psaeyang          #+#    #+#             */
/*   Updated: 2023/01/27 01:40:02 by psaeyang         ###   ########.fr       */
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
			if (av[1][i] == '_')
			{
				i++;
				ft_putchar(av[1][i] - 32);
			}
			else
				ft_putchar(av[1][i]);
			i++;
		}
	}
		write(1, "\n", 1);
}
