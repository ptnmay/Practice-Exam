/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 08:48:14 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/20 08:52:14 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int check(char *s, char c, int len)
{
    int i = 0;
    while(s[i] && i < len)
    {
        if (s[i] == c)
            return(1);
        i++;
    }
    return(0);
}

int main(int ac, char **av)
{
    if (ac == 3)
    {
        int i = 0;
        int j = 0;

        while(av[1][i])
            i++;
        while(av[2][j])
        {
            av[1][i] = av[2][j];
            i++;
            j++;
        }
        i = 0;
        while(av[1][i])
        {
            if (check(av[1], av[1][i], i) == 0)
                write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}