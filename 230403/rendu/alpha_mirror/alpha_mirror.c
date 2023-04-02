/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 03:12:03 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/03 03:16:15 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int lower(char c)
{
    if (c >= 'a' && c <= 'z')
        return(1);
    return(0);
}

int upper(char c)
{
    if (c >= 'A' && c <= 'Z')
        return(1);
    return(0);
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i = 0;

        while(av[1][i])
        {
            if (upper(av[1][i]) == 1)
                av[1][i] = 'A' + 'Z' - av[1][i];
            else if (lower(av[1][i]) == 1)
                av[1][i] = 'a' + 'z' - av[1][i];
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}