/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_ft_rrange.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 02:04:53 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/11 02:24:50 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
    int i = 0;
    int diff;
    int *res;

    if (start <= end)
    {
        res = malloc(sizeof(int) * (end - start + 1));
        diff = -1;
    }
    else if (start > end)
    {
        res = malloc(sizeof(int) * (start - end + 1));
        diff = 1;
    }
    while (start != end)
    {
        res[i] = end;
        i++;
        end = end + diff;
    }
    res[i] = end;
    return(res);
}

int main()
{
    int *tab = ft_rrange(-1, -9);
    int i = 0;
    while(i < 11)
    {
        printf("%d\n", tab[i]);
        i++;
    }
}