/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 01:48:44 by psaeyang          #+#    #+#             */
/*   Updated: 2023/01/27 02:58:03 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_check(char *s1, char s, int len)
{
	int i = 0;

	while (s1[i] && (i < len || len == -1))
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
	// int	k = 0;

	if (ac == 3)
	{
		while (av[1][i])
		{
			i++;
		}
		while (av[2][j])
		{
			av[1][i] = av[2][j];
			i++;
			j++;
		}
		i = 0;
		while(av[1][i])
		{
			if (ft_check(av[1], av[1][i], i) != 0)
				write(1, &av[1][i], 1);
			i++;
		}

		// while(av[1][k])
		// {
		// 	if (ft_check(av[1], av[1][k], k) != 0)
		// 		write(1, &av[1][k], 1);
		// 	k++;
		// }
		//printf("%s\n", av[1]);
	}
	write(1, "\n", 1);
}
//mew and fah help
