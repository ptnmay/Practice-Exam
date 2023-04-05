/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 05:11:07 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/06 05:21:59 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char  *ft_strchr(const char *s, char c)
{
    while(*s)
    {
        if (*s == c)
            return((char *)s);
        s++;
    }
    return(0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
    int i = 0;

    while(s[i])
    {
        if (ft_strchr(accept, s[i]) == 0)
            return(i);
        i++;
    }
    return(i);
}

int main()
{
    printf("strspn = %lu\n" ,      strspn("hello","lp"));
    printf("ft_strspn = %lu\n" ,ft_strspn("hello","lp"));
}