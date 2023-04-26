/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_wdmatch.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 04:15:08 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/07 04:25:24 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ftputstr(char *s)
{
	int i = 0;

	while(s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 3)
	{
		int i = 0;

		while(av[1][i])
		{
			int j = 0;
			while(av[2][j])
			{
				if (av[1][i] == av[2][j])
					i++;
				j++;
			}
			if (av[2][j] == '\0')
				break ;
		}
		if (av[1][i] == '\0')
			ftputstr(av[1]);
	}
	write(1, "\n", 1);
}
