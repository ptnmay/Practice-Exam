/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_atoi_base.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 04:26:58 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/23 04:49:02 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char ft_lower(char c)
{
    if (c >= 'A' && c <= 'Z')
        return(c + 32);
    return(c);
}

int get_digit(char c)
{
    if (c >= '0' && c <= '9')
        return(c - '0');
    else if (c >= 'a' && c <= 'f')
        return(c - 'a' + 10);
    else
        return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
    int digit = 0;
    int i = 0;
    int res = 0;

    if(str[0] == '-')
        i++;
    while((digit = get_digit(ft_lower(str[i]))) >= 0)
    {
        res = (res * str_base) + digit;
        i++;
    }
    if (str[0] == '-')
        return(res * -1);
    return(res);
}

int main()
{
    printf("%d\n", ft_atoi_base("-ab", 16));
}