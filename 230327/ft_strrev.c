/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 04:31:28 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/27 04:51:14 by psaeyang         ###   ########.fr       */
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
    len = len - 1;
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

int main(void)
{
    char s[] = "noissesbo-oxe";
    printf("%s\n", ft_strrev(s));
}