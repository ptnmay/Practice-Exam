/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 02:29:47 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/01 02:43:09 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

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
        tmp = str[i];
        str[i] = str[len];
        str[len] = tmp;
        i++;
        len--;
    }
    return(str);
}

int main()
{
    char s[] = "hello";
    printf("strrev = %s\n", ft_strrev(s));
}