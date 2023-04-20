/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_atoibase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 10:01:14 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/20 10:36:23 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char lower(char s)
{
    if (s >= 'A' && s <= 'Z')
        return(s + 32);
    return (s);
}

int getdigit(char s)
{
    if (s >= '0' && s <= '9')
        return(s - '0');
    else if (s >= 'a' && s <= 'f')
        return(s - 'a' + 10);
    else   
        return(-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int res = 0;
    int digit = 0;

    if (str[0] == '-')
        i++;
    while((digit = getdigit(lower(str[i]))) >= 0)
    {
        res = res * str_base + digit;
        i++;
    }
    if (str[0] == '-')
        return(res * -1);
    return(res);
}

int main()
{
    printf("%d\n", ft_atoi_base("11", 2));
}