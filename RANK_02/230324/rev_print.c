/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 19:26:38 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/24 19:48:19 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	if (ac == 2)
	{
		while(av[1][i])
			i++;
		i--;
		while (i >= 0)
		{
			write(1, &av[1][i], 1);
			i--;
		}
	}
	write(1, "\n", 1);
}
