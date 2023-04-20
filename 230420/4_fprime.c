/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_fprime.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:36:48 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/20 20:24:37 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void ftprime(int n)
{
    int i = 2;

    if (n == 1)
        printf("%d", n);
    while(n > 1)
    {
        if (n % i == 0)
        {
            printf("%d", i);
            n /= i;
            if (n != 1)
                printf("*");
        }
        else
            i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        ftprime(atoi(av[1]));
    }
    printf("\n");
}