/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 04:16:20 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/30 04:21:10 by psaeyang         ###   ########.fr       */
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
            if (i != 0 && (av[1][i] >= 'A' && av[1][i] <= 'Z'))
            {
                ft_putchar('_');
                ft_putchar(av[1][i] + 32);
            }
            else
                ft_putchar(av[1][i]);
            i++;
        }
    }
    write(1, "\n", 1);
}