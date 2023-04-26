/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 23:17:07 by psaeyang          #+#    #+#             */
/*   Updated: 2023/01/27 00:33:03 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int i = 0;

	if (ac == 4)
	{
		if (av[2][i] == '*')
			printf("%d", atoi(av[1]) * atoi(av[3]));
		else if (av[2][i] == '+')
			printf("%d", atoi(av[1]) + atoi(av[3]));
		else if (av[2][i] == '-')
			printf("%d", atoi(av[1]) - atoi(av[3]));
		else if (av[2][i] == '/')
			printf("%d", atoi(av[1]) / atoi(av[3]));
	}
	printf("\n");
}
//p'petch npiya help
