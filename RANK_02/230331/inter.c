/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 19:48:07 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/31 19:53:30 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int check(char *s, char c, int len)
{
	int i = 0;
	while(i < len || len == -1)
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

		while(av[1][i])
		{
			if(check(av[1], av[1][i], i) == 0 && check(av[2], av[1][i], -1) == 1)
			{
				write(1, &av[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
}