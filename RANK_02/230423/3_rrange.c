/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_rrange.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 02:40:04 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/23 02:56:50 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int     *ft_rrange(int start, int end)
{
    int i = 0;
    int *tab;
    int diff;

    if (start > end)
    {
        tab = malloc(sizeof(int) * (start - end + 1));
        diff = 1;
    }
    else
    {
        tab = malloc(sizeof(int) * (end - start + 1));
        diff = -1;
    }
    while(end != start)
    {
        tab[i] = end;
        end = end + diff;
        i++;
    }
    tab[i] = end;
    return(tab);
}

int main()
{
    int *tab = ft_rrange(-1562356, -1562350);
    int i = 0;
    
    while(i < 8)
    {
        printf("%d\n", tab[i++]);
    }
}