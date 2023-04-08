/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_tab_mult.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 02:49:58 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/09 03:02:45 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ftatoi(char *s)
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

void    nbr(int n)
{
    if (n > 9)
        nbr(n / 10);
    write(1, &"0123456789"[n % 10], 1);
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i = 1;

        while(i <= 9)
        {
            nbr(i);
            write(1, " x ", 3);
            nbr(ftatoi(av[1]));
            write(1, " = ", 3);
            nbr(i * ftatoi(av[1]));
            write(1, "\n", 1);
            i++;
        }
    }
    else
        write(1, "\n", 1);
}
