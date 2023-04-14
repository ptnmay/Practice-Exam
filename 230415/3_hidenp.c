/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_hidenp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 05:15:27 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/15 05:33:06 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(int ac, char **av)
{
	if (ac == 3)
	{
		int i = 0;
		int j = 0;
		int one = '1';
		int zero = '0';

		while(av[1][i])
		{
			while(av[2][j])
			{
				if (av[1][i] == av[2][j])
					i++;
				j++;
				if (av[1][i] == '\0')
					break ;
			}
			if (av[2][j] == '\0')
				break ;
		}
		if (av[1][i] == '\0')
			write(1, &one, 1);
		else
			write(1, &zero, 1);
	}
	write(1, "\n", 1);
}
