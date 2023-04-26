/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_sort_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 01:17:17 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/18 01:59:53 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
    unsigned int tmp = 0;
    unsigned int i = 0;

    if (!tab)
        return ;
    while(size)
    {
        if (tab[i] > tab[i + 1])
        {
            tmp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = tmp;
            i++;
        }
        size--;
    }
}

//idk is it correct

int main(void)
{
    int i = 0;
    // int tab[5] = {4, 1, 50, 5, 5};
    int *tab;
    tab[0] = 4;
    tab[1] = 1;
    tab[2] = 3;
    tab[3] = 5;
    tab[4] = 46;

    sort_int_tab(tab, 5);
    while (i < 5)
        printf("%d\n" , tab[i++]);
}

// int main()
// {
//     int *tab;
//     tab[0] = 1;
//     tab[1] = 7;
//     tab[2] = 3;
//     tab[3] = 8;
//     sort_int_tab(tab, 4);
//     int i = 0;
//     while(4)
//     {
//         printf("%d\n", tab[i]);
//         i++;
//     }
// }