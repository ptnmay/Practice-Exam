/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_is_power_of_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 00:46:52 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/09 01:50:24 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	    is_power_of_2(unsigned int n)
{
    while(n) //mobile
    {
        if (n % 2 == 1 && n != 1)
            return(0);
        n /= 2;
    }
    return(1);

    // int i = 1; //mew
    // while(i <= n)
    // {
    //     if (i == n)
    //         return(1);
    //     i = i * 2;
    // }
    // return(0);
}

int main()
{
    printf("%d\n", is_power_of_2(1));
    printf("%d\n", is_power_of_2(5));
    printf("%d\n", is_power_of_2(10));
    printf("%d\n", is_power_of_2(16));
    printf("%d\n", is_power_of_2(128));
}