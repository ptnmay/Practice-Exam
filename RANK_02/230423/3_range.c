/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_range.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 03:58:07 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/23 04:02:15 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int     *ft_range(int start, int end)
{
    int i = 0;
    int diff;
    int *res;

    if (start > end)
    {
        res = malloc(sizeof(int) * (start - end + 1));
        diff = -1;
    }
    else
    {
        res = malloc(sizeof(int) * (end - start + 1));
        diff = 1;
    }
    while(start != end)
    {
        res[i] = start;
        start = start + diff;
        i++;
    }
    res[i] = start;
    return(res);
}

int main()
{
    int i = 0;
    int *tab = ft_range(-235245, -235240);

    while(i < 5)
        printf("%d\n", tab[i++]);
}