/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 05:44:18 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/27 22:43:32 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char    *ft_strchr(const char *s, char c)
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



//wrong
// size_t	ft_strspn(const char *s, const char *accept)
// {
//     int i = 0;

//     while(s[i])
//     {
//         int j = 0;
//         while (accept[j])
//         {
//             if (s[i] != accept[j])
//                 return (i);
//             j++;
//         }
//         i++;
//     }
//     return(i);
// }

int main()
{
    printf("strspn = %lu\n" ,      strspn("bhbbbbc","bha"));
    printf("ft_strspn = %lu\n" ,ft_strspn("bhbbbbc","bha"));
}