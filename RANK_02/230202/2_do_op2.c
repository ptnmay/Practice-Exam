/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_do_op2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 20:53:38 by psaeyang          #+#    #+#             */
/*   Updated: 2023/02/02 21:54:57 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac == 4)
	{
		if (av[2][0] == '+')
			printf("%d", (atoi(av[1]) + atoi(av[3])));
		else if (av[2][0] == '-')
			printf("%d", (atoi(av[1]) - atoi(av[3])));
		else if (av[2][0] == '*')
			printf("%d", (atoi(av[1]) * atoi(av[3])));
		else if (av[2][0] == '/')
			printf("%d", (atoi(av[1]) / atoi(av[3])));
	}
	printf("\n");
}
