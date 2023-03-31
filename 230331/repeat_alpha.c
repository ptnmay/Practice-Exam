/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:15:40 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/31 16:29:20 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    int i = 0;
    int j = 0;
    if(ac == 2)
    {
        while(av[1][i])
        {
            if (av[1][i] >= 'a' && av[1][i] <= 'z')
            {
                j = av[1][i] - 'a';
                while(j >= 0)
                {
                    ft_putchar(av[1][i]);
                    j--;
                }
            }
            else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
            {
                j = av[1][i] - 'A';
                while(j >= 0)
                {
                    ft_putchar(av[1][i]);
                    j--;
                }
            }
            else
                ft_putchar(av[1][i]);
            i++;
        }
    }
    write(1 ,"\n", 1);
}