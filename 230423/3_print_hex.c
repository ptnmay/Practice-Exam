/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_print_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 02:57:30 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/23 03:57:56 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int atoii(char *s)
{
    int i = 0;
    int res = 0;

    while(s[i] >= '0' && s[i] <= '9')
        res = res * 10 + (s[i++] - '0');
    return(res);
}

void nbr(int n)
{
    if (n > 16)
        nbr(n / 16);
    write(1, &"0123456789abcdef"[n % 16], 1);
}

int main(int ac, char **av)
{
    if (ac == 2)
        nbr(atoii(av[1]));
    write(1, "\n", 1);
}