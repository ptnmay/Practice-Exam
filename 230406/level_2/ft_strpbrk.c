/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 04:46:49 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/06 04:52:07 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{

    while(*s1)
    {
        int i = 0;
        while(s2[i])
        {
            if (*s1 == s2[i])
                return((char *)s1);
            i++;
        }
        s1++;
    }
    return(0);
}

int main()
{
    printf("%s\n" ,   strpbrk("hello", "ez"));
    printf("%s\n" ,ft_strpbrk("hello", "ez"));
}