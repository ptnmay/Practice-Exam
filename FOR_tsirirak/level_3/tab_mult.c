/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_tab_mult.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 09:50:57 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/20 10:00:32 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void nbr(int n)
{
    if (n > 9)
        nbr(n / 10);
    write(1, &"0123456789"[n % 10], 1);
}

int atoii(char *s)
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
    if (ac > 1)
    {
        int i = 1;
        while (i < 10)
        {
            nbr(i);
            write(1, " x ", 3);
            nbr(atoii(av[1]));
            write(1, " = ", 3);
            nbr(i * atoii(av[1]));
            write(1, "\n", 1);
            i++;
        }
    }
    else
        write(1, "\n", 1);
}

