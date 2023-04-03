/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 23:11:34 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/26 23:22:09 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char    *ft_strrev(char *str)
{
    int i = 0;
    int len = 0;
    char tmp;

    while(str[len])
        len++;
    len = len - 1; //index
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
    // char *str = ft_strrev(s);
    printf("ft_strrev = %s\n", ft_strrev(s));
}