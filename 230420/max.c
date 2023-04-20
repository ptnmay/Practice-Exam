/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 09:34:49 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/20 09:38:16 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		max(int* tab, unsigned int len)
{
    if (!tab)
        return (0);
    int i = 0;
    int tmp = tab[0];
    while(i < len)
    {
        if (tmp < tab[i])
        {
            tmp = tab[i];
        }
        i++;
    }
    return(tmp);
}

int main()
{
	int tab[4];
	tab[0] = 10;
	tab[1] = 1;
	tab[2] = 3;
	tab[3] = 5;
	printf("%d\n", max(tab, 4));
}