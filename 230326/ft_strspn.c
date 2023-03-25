/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 04:15:07 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/26 04:30:21 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char       *ft_strchr(const char *s, int c)
{
    while (*s)
    {
        if (*s == c)
            return ((char *)s);
        s++;
    }
    return (0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
    int i = 0;
    while(s[i])
    {
        if (ft_strchr(accept, s[i]) == 0)
            // return(i++);
            break ;
        i++;
        // ++i;        
    }
    return (i);
}

int main(void)
{
    printf("strspn = %lu\n" ,      strspn("aaaaabhbbbbc","ab"));
    printf("ft_strspn = %lu\n" ,ft_strspn("aaaaabhbbbbc","ab"));
}