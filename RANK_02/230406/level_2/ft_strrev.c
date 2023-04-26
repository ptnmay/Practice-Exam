/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 06:04:47 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/06 06:22:53 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char    *ft_strrev(char *str)
{
    int i = 0;
    int len = 0;
    char tmp;

    while(str[len])
        len++;
    len--;
    while(i < len)
    {
        tmp = str[len];
        str[len] = str[i];
        str[i] = tmp;
        i++;
        len--;
    }
    return(str);
}

int main()
{
    char s[] = "halb halb halb";
    printf("ft_strrev = %s\n", ft_strrev(s));
}