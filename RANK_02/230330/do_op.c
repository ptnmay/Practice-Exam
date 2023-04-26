/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 04:32:46 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/30 04:41:02 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    if (ac == 4)
    {
        int i = 0;

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