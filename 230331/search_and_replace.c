/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 19:19:02 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/31 19:47:13 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int len(char *s)
{
	int i = 0;

	while(s[i])
		i++;
	return(i);
}

int main(int ac, char **av)
{
	if (ac == 4)
	{
		int i = 0;

		while(av[1][i] && len(av[2]) == 1 && len(av[3]) == 1)
		{
			if (av[1][i] == av[2][0])
			{
				write(1, &av[3][0], 1);
				i++;
			}
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
