/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_fprime.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 17:24:44 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/10 18:39:30 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void   fprime(int n)
{
    int i = 2;
    if(n == 1)
        printf("1");
    while(n > 1)
    {
        if (n % i == 0)
        {
            printf("%d", i);
            n = n / i;
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
        fprime(atoi(av[1]));
    printf("\n");
}