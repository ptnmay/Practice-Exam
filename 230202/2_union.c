/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_union.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:10:18 by psaeyang          #+#    #+#             */
/*   Updated: 2023/02/02 19:49:06 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int check(char *av, char s, int len)
{
	int i = 0;

	while (av[i] && i < len)
	{
		if (av[i] == s)
			return(1);
		i++;
	}
	return(0);
}

int main(int ac, char **av)
{
	int i = 0;
	int j = 0;

	if (ac == 3)
	{
		while(av[1][i])
			i++;
		while(av[2][j])
		{
			av[1][i] = av[2][j];
			i++;
			j++;
		}
		i = 0;
		while(av[1][i])
		{
			if (check(av[1], av[1][i], i) == 0)
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
