/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_rrange.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:26:09 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/20 11:31:47 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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
    while(end != start)
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
    int *tab = ft_rrange(1, 3);
    int i = 0;
    while(i < 3)
    {
        printf("%d\n", tab[i]);
        i++;
    }
}