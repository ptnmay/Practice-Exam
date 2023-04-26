/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_do_op.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:46:31 by psaeyang          #+#    #+#             */
/*   Updated: 2023/02/02 16:07:27 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac == 4)
	{
		if(av[2][0] == '*')
			printf("%d", (atoi(av[1]) * atoi(av[3])));
		else if(av[2][0] == '+')
			printf("%d", (atoi(av[1]) + atoi(av[3])));
		else if(av[2][0] == '-')
			printf("%d", (atoi(av[1]) - atoi(av[3])));
		else if(av[2][0] == '/')
			printf("%d", (atoi(av[1]) / atoi(av[3])));
	}
	printf("\n");
}
