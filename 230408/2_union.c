/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_union.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 04:32:00 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/08 04:55:30 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int check(char *s, char c, int len)
{
	//do not for get int len!!!
	int i = 0;
	while(i < len)
	{
		if (s[i] == c)
			return(1);
		i++;
	}
	return(0);
}

int main(int ac, char **av)
{
	if (ac == 3)
	{
		int i = 0;
		int j = 0;

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
