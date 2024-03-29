/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 23:24:50 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/26 23:37:12 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i = 0;
        while(av[1][i])
        {
            if (av[1][i] >= 'a' && av[1][i] <= 'z')
            {
                av[1][i] = 'a' + 'z' - av[1][i];
                // write(1, &av[1][i], 1);
            }
            else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
            {
                av[1][i] = 'A' + 'Z' - av[1][i];
                // write(1, &av[1][i], 1);
            }
            // else
                write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}