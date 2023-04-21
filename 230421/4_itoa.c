/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_itoa.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 15:53:37 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/21 16:08:37 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int nbr)
{
    int i = 0;
    int len = 0;
    int n = nbr;

    if (nbr <= 0)
        len++;
    while(n)
    {
        n /= 10;
        len++;
    }
    char *res = malloc(sizeof(char) * (len + 1));
    if (nbr < 0)
    {
        res[0] = '-';
        nbr = -nbr;
    }
    if (nbr == 0)
    {
        res[0] = '0';
        return(res);
    }
    while(nbr)
    {
        res[--len] = nbr % 10 + '0';
        nbr /= 10;
    }
    return(res);
}

int main()
{
    printf("%s\n", ft_itoa(12));
    printf("%s\n", ft_itoa(-12));
    printf("%s\n", ft_itoa(1200000));
}