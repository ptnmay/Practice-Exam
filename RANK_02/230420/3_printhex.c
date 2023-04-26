/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_printhex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:00:58 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/20 11:09:53 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void nbr16(int n)
{
    if (n > 16)
        nbr16(n /  16);
    write(1, &"0123456789abcdef"[n % 16], 1);
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int n = 0;

        n = atoii(av[1]);
        nbr16(n);
    }
    write(1, "\n", 1);
}