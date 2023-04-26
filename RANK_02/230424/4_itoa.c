/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_itoa.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 19:36:02 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/24 21:10:01 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa(int nbr)
{
    int len = 0;
    int n = nbr;
    char *res;

    if (nbr <= 0)
        len++;
    while(n)
    {
        n /= 10;
        len++;
    }
    res = malloc(sizeof(char) * len + 1);
    if (nbr == 0)
    {
        res[0] = '0';
        return(res);
    }
    if (nbr < 0)
    {
        res[0] = '-';
        nbr = -nbr;
    }
    while(nbr)
    {
        res[--len] = (nbr % 10) + '0';
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