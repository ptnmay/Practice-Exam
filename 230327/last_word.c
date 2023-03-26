/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 06:00:17 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/27 06:15:06 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int tapace(char s)
{
    int i = 0;

    if (s >= 9 && s <= 13 || s == 32)
        return(1);
    return(0);
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i = 0;
        while(av[1][i])
            i++;
        i--;
        while(tapace(av[1][i]) == 1)
            i--;
        while(av[1][i] > 33)
            i--;
        i++;
        while(tapace(av[1][i]) == 0 && av[1][i]) //av[1][i]
        {
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}

//wrong

// int main(int ac, char **av)
// {
//     if (ac == 2)
//     {
//         int i = 0;

//         while(av[1][i])
//         {
//             if ((av[1][i] >= 9 && av[1][i] <= 13) || av[1][i] == 32)
//                 i++;
//         }
//         i--;
//         while(av[1][i])
//         {
//             if ((av[1][i] >= 9 && av[1][i] <= 13) || av[1][i] == 32)
//                 break ;
//             write(1, &av[1][i], 1);
//             i++;
//         }
//     }
//     write(1, "\n", 1);
// }