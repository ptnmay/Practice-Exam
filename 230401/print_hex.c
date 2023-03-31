/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 03:22:40 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/01 03:26:40 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putnbr(int n)
{
    if (n > 15)
        ft_putnbr(n / 16);
    write(1, &"0123456789abcdef"[n % 16], 1);
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
    int n = 0;

    if (ac == 2)
    {
        n = ft_atoi(av[1]);
        ft_putnbr(n);
    }
    write(1, "\n", 1);
}