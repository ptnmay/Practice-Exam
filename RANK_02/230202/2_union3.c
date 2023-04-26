/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_union3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 20:07:59 by psaeyang          #+#    #+#             */
/*   Updated: 2023/02/02 20:23:53 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int check(char *s1, char s, int len)
{
	int i = 0;

	while (i < len)
	{
		if (s1[i] == s)
			return(0);
		i++;
	}
	return(1);
}

int main(int ac, char **av)
{
	int i = 0;
	int j = 0;

	if (ac == 3)
	{
		while (av[1][i])
			i++;
		while (av[2][j])
		{
			av[1][i] = av[2][j];
			i++;
			j++;
		}
		i = 0;
		while(av[1][i])
		{
			if (check(av[1], av[1][i], i) == 1)
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);


}
