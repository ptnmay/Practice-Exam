/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_expand_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 01:50:42 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/10 02:21:11 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int space(char s)
{
    if (s >= 9 && s <= 13 || s == 32)
        return(1);
    return(0);
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i = 0;
        int len = 0;

        while(av[1][len])
            len++;
        len--;
        while(space(av[1][len]) == 1)
            len--;
        while(space(av[1][i]) == 1)
            i++;
        while(av[1][i] && i <= len)
        {
            if (av[1][i] > 32)
            {
                write(1, &av[1][i], 1);
                i++;
            }
            else if (space(av[1][i]) == 1)
            {
                while(space(av[1][i]) == 1)
                    i++;
                i--;
                write(1, "   ", 3);
                i++;
            }
        }
    }
    write(1, "\n", 1);
}