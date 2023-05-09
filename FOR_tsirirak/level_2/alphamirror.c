/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alphamirror.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 08:31:25 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/20 08:36:27 by psaeyang         ###   ########.fr       */
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
                av[1][i] = 'a' + 'z' - av[1][i];
            else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
                av[1][i] = 'A' + 'Z' - av[1][i];
            write(1, &av[1][i], 1); 
            i++;
        }
    }
    write(1, "\n", 1);
}