/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_ft_range.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 01:45:09 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/11 02:25:32 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int i = 0;
    int diff;
    int *res;

    if(start <= end)
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

int	main()
{
	int *tab = ft_range(-1, -9);
	int	i;

	i = 0;
	while(i < 5)
	{
		printf("tab[%d]  : %d\n", i , tab[i]);
		i++;
	}
}