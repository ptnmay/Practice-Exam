/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camelsnack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 09:23:10 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/20 09:29:11 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <unistd.h>

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i = 0;
        while(av[1][i])
        {
            if (av[1][i] >= 'A' && av[1][i] <= 'Z')
            {
                av[1][i] = av[1][i] + 32;
                write(1, "_", 1);
                // i++;
            }
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}