/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 00:30:58 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/01 00:47:01 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i = 0;

        while(av[1][i])
        {
            if (av[1][i] >= 'a' && av[1][i] <= 'n')
                ft_putchar(av[1][i] + 13);
            else if (av[1][i] >= 'm' && av[1][i] <= 'z')
                ft_putchar(av[1][i] - 13);
            else if(av[1][i] >= 'A' && av[1][i] <= 'N')
                ft_putchar(av[1][i] + 13);
            else if (av[1][i] >= 'M' && av[1][i] <= 'Z')
                ft_putchar(av[1][i] - 13);
            else
                ft_putchar(av[1][i]);
            i++;
        }
    }
    write(1, "\n", 1);
}