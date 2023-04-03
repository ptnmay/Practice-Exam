/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 05:56:45 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/04 06:11:48 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    if (ac == 4)
    {
        if (av[2][0] == '+')
            printf("%d", atoi(av[1]) + atoi(av[3]));
        else if (av[2][0] == '-')
            printf("%d", atoi(av[1]) - atoi(av[3]));
        else if (av[2][0] == '*')
            printf("%d", atoi(av[1]) * atoi(av[3]));
        else if (av[2][0] == '/')
            printf("%d", atoi(av[1]) / atoi(av[3]));
        else if (av[2][0] == '%')
            printf("%d", atoi(av[1]) % atoi(av[3]));
    }
    printf("\n");
}