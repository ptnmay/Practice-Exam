/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_itoa.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:33:33 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/20 11:38:57 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int nbr)
{
    int n = nbr;
    int len = 0;

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
    if (nbr = 0)
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