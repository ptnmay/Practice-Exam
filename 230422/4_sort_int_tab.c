/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_sort_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 18:45:37 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/22 02:25:38 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
    if (!tab)
        return ;
    int i = 0;
    int j = 0;
    int tmp;

    while(i < size)
    {
        j = i + 1;
        while(j < size)
        {
            if (tab[i] > tab[j])
            {
                tmp = tab[i];
                tab[i] = tab[j];
                tab[j] = tmp;

            }
            j++;
        }
        i++;
    }
}

int main()
{
    int i = 0;
    int *tab;
    tab[0] = 900;
    tab[1] = 1;
    tab[2] = 55;
    tab[3] = 4;
    tab[4] = 46;

    sort_int_tab(tab, 5);
    while (i < 5)
        printf("%d\n" , tab[i++]);
}