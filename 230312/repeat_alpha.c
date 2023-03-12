/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:35:02 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/12 21:09:48 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	if (ac == 2)
	{
		while(av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				int a = 0;
				int b = av[1][i] - 'a';
				while (a <= b)
				{
					write(1, &av[1][i], 1);
					a++;
				}
			}
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				int x = 0;
				int y = av[1][i] - 'A';
				while (x <= y)
				{
					write(1, &av[1][i], 1);
					x++;
				}
			}
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
