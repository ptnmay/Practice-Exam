/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 19:44:45 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/24 20:02:22 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_len(char *s)
{
	int i = 0;
	while (s[i])
		i++;
	return (i);
}

int main(int ac, char **av)
{
	int i = 0;

	if (ac == 4 && (ft_len(av[2]) == 1 && ft_len(av[3]) == 1))
	{
		while (av[1][i])
		{
			if (av[1][i] == av[2][0])
				write(1, &av[3][0], 1);
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
