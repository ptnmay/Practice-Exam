/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_max.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 02:02:27 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/09 02:35:45 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		max(int* tab, unsigned int len)
{
    unsigned int i = 0;
    int num = tab[0];

    if (!tab)
        return(0);
    while (i < len)
    {
        if (num < tab[i])
            num = tab[i];
        i++;
    }
    return(num);
}

int main()
{
    int n[5];
    n[0] = 1;
    n[1] = 20;
    n[2] = 3;
    n[3] = 56;
    n[4] = 32;
    printf("%d\n", max(n, 5));
}