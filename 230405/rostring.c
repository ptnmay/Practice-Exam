/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rororo.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 18:43:23 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/05 02:01:18 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int tapace(char c)
{
    if (c >= 9 && c <= 13 || c == 32)
        return(1);
    return(0);
}

int main(int ac, char **av)
{
    if (ac >= 2)
    {
        int i = 0;
        int begin = 0;
        int end = 0;
        int flang = 0;


        while(av[1][i] && tapace(av[1][i]) == 1)
            i++;
        begin = i;
        while(av[1][i] && tapace(av[1][i]) == 0)
            i++;
        end = i - 1;
        while(av[1][i] && tapace(av[1][i]) == 1)
            i++;
        while(av[1][i] && av[1][i])
        {
            while(av[1][i] && tapace(av[1][i]) == 1)
                i++;
            while(av[1][i] && tapace(av[1][i]) == 0 && av[1][i])
            {
                write(1, &av[1][i], 1);
                i++;
                flang = 1;
            }
            if (flang == 1 && tapace(av[1][i - 1]) == 0)
                write(1, " ", 1);
        }
        while(begin <= end)
        {
            write(1, &av[1][begin], 1);
            begin++;
        }        
    }
    write(1, "\n", 1);
}