/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2.inter.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 08:59:25 by psaeyang          #+#    #+#             */
/*   Updated: 2023/02/02 09:42:10 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int check(char *avv, char av, int len)
{
	int i = 0;

	while (avv[i] && (i < len || len == -1))
	{
		if (avv[i] == av)
			return(1);
		i++;
	}
	return (0);
}

int main(int ac, char **av)
{
	int i = 0;
	if (ac == 3)
	{
		while(av[1][i])
		{
			if ((check(av[2], av[1][i], -1) == 1) && (check(av[1], av[1][i], i) == 0))
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
