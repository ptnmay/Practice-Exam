/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 03:22:29 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/03 04:07:20 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>
#include <stdio.h>

void    ft_putnbr(int n)
{
    if (n > 9)
        ft_putnbr(n / 10);
    write(1, &"0123456789"[n % 10], 1);
}

int ft_atoi(char *s)
{
    int i = 0;
    int res = 0;

    while(s[i] >= '0' && s[i] <= '9')
    {

            res = res * 10 + (s[i] - '0');
            i++;

    }
    return(res);
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i = 1;
        int ans = 0;

        ans = ft_atoi(av[1]);
        while(i <= 9)
        {
            ft_putnbr(i);
            write(1, " x ", 3);
            ft_putnbr(ans);
            write(1, " = ", 3);
            ft_putnbr(i * ans);
            if (i == 9)
                break ;
            write(1, "\n", 1);
            i++;
        }
    }
    write(1, "\n", 1);
}