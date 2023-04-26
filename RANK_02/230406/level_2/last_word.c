/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 17:17:54 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/06 17:27:39 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int tapace(char c)
{
    if ((c >= 9 && c <= 13) || c == 32)
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
        while(av[1][i] > 32)
            i--;
        i++;
        while(av[1][i] > 32)
        {
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}