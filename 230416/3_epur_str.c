/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_epur_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 00:21:39 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/16 01:04:17 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int space(char c)
{
	if (c >= 9 && c <= 13 || c == 32)
		return(1);
	return(0);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;
		int end = 0;

		while(av[1][end])
			end++;
		end--;
		while(space(av[1][end]) == 1)
			end--;
		while(i <= end)
		{
			while(space(av[1][i]) == 1)
				i++;
			while(av[1][i] > 32)
			{
				write(1, &av[1][i], 1);
				i++;
			}
			if (space(av[1][i]) == 1)
			{
				while (space(av[1][i]) == 1)
					i++;
				if (i < end)
					write(1, " ", 1);
			}
		}
	}
	write(1, "\n", 1);
}
