/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 00:55:49 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/04 03:38:09 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i = 0;
        int j = 0;

        while(av[1][i])
            i++;
        i--;
         while(av[1][i] == 32)
                i--;
        while(i >= 0)
        {
            while(av[1][i] > 32)
                i--;
            j = i + 1;
            while(av[1][j] > 32)
            {
                write(1, &av[1][j], 1);
                j++;
            }
            while(av[1][i] == 32 || (av[1][i] >= 9 && av[1][i] <= 13))
                i--;
            if (i != -1)
                write(1, " ", 1);








        }
    }
    write(1, "\n", 1);
}

// int main(int ac, char **av)
// {
//     if (ac == 2)
//     {
//         int i = 0;
//         int j = 0;

//         while(av[1][i])
//             i++;
//         i--;
//         while(av[1][i] != 32)
//             i--;
//         i++;
//         j = i;
//         while(av[1][i] > 33)
//         {
//             write(1, &av[1][i], 1);
//             i++;
//         }
//         while(av[1][j--] != 32 && j >= 0)
//         {
//             j--;
//         }
//         j++;
//         write(1, " ", 1);
//         while(av[1][j] > 33)
//         {
//             write(1, &av[1][j], 1);
//             j++;
//         }

//     }
//     write(1, "\n", 1);
// }