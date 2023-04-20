/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_range.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:11:29 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/20 11:31:42 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int     *ft_range(int start, int end)
{
    int *res;
    int i = 0;
    int diff;

    if (start <= end)
    {
        res = malloc(sizeof(int) * (end - start + 1));
        diff = 1;
    } 
    else if (start > end)
    {
        res = malloc(sizeof(int) * (start - end + 1));
        diff = -1;
    }
    while(start != end)
    {
        res[i] = start;
        i++;
        start = start + diff;
    }
    res[i] = start;
    return(res);
}

int main()
{
    int *tab = ft_range(1, 3);
    int i = 0;
    while(i < 3)
    {
        printf("%d\n", tab[i]);
        i++;
    }
}