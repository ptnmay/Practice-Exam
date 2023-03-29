/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 04:58:56 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/30 05:07:24 by psaeyang         ###   ########.fr       */
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
    len--; //wrong here | len-- for index
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
