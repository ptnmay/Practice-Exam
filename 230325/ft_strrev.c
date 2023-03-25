/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 20:52:09 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/25 21:47:47 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_len(char *s)
{
    int i = 0;

    while (s[i])
        i++;
    return (i);
}

char    *ft_strrev(char *str)
{
    int i = 0;
    int len = ft_len(str);
    char ans;
    
    len = len - 1;
    while (i < len)
    {
        ans = str[i];
        str[i] = str[len];
        str[len] = ans;
        i++;
        len--;
    }
    return(str);
}

int main(void)
{
    char str[] = "hello hi bla bla bla";
    // char *s = ft_strrev(str);
    printf("%s", ft_strrev(str));
    printf("\n");
}