/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_ft_atoi_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 03:00:34 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/11 04:31:49 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char lower(char c)
{
    if (c >= 'A' && c <= 'Z')
        return(c + 32);
    return(c);
}

int get_digit(char s)
{
    if (s >= '0' && s <= '9')
        return(s - '0');
    else if (s >= 'a' && s <= 'z')
        return(s - 'a' + 10);
    else
        return(-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
    int digit = 0;
    int i = 0;
    int res = 0;

    while((digit = get_digit(lower(str[i]))) >= 0)
    {
        res = res * str_base;
        res = res + digit;
        i++;
    }

    return(res);
}

int main()
{
    printf("%d\n", ft_atoi_base("1000", 2));
}