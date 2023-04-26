/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 04:49:10 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/30 04:58:36 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int tapace(char s)
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

        while(av[1][i])
            i++;
        i--;
        while(tapace(av[1][i]) == 1)
            i--;
        while(av[1][i] > 33)
            i--;
        i++; //wrong here | i++ for go back to char
        while(tapace(av[1][i]) == 0 && av[1][i]) //av[1][i] again
        {
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}