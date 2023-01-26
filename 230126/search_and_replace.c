/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 16:05:03 by psaeyang          #+#    #+#             */
/*   Updated: 2023/01/26 16:45:02 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *s)
{
	int i = 0;

	while(s[i])
		i++;
	return (i);
}

int main(int ac, char **av)
{
	int i = 0;

	if (ac == 4)
	{
		if (ft_strlen(av[2])!= 1 || ft_strlen(av[3]) != 1)
		{
			write(1, "\n", 1);
			exit(0);
		}
		while(av[1][i])
		{
			if (av[1][i] == av[2][0])
			{
				write(1, &av[3][0], 1);
			}
			else
				write(1, &av[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
}
