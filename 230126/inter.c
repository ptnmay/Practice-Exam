/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 03:40:28 by psaeyang          #+#    #+#             */
/*   Updated: 2023/01/27 05:21:31 by psaeyang         ###   ########.fr       */
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

	if (ac == 3)
	{
		while (av[1][i])
		{
			if (ft_check(av[1], av[2][j], i) != 0)
				write(1, &av[1][i], 1);
			i++;
			//j++;
		}
		// while(av[1][i])
		// {
		// 	while(av[2][j])
		// 	{
		// 		if (av[1][i] == av[2][j])
		// 		{
		// 			write(1, &av[1][i], 1);
		// 			j++;
		// 		}
		// 	}
		// 	i++;
		// }
	}
	write(1, "\n", 1);
}
//give up do it next time
