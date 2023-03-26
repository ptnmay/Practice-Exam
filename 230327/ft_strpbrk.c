/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 05:54:35 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/27 05:58:13 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
    // int i = 0;
    while(*s1)
    {
        int j = 0;
        while (s2[j])
        {
            if (*s1 == s2[j])
                return((char *)(s1));
            j++;
        }
        s1++;
    }
    return(0);
}

//if no same return null

int main()
{
    printf("%s\n" ,   strpbrk("hello", "ole"));
    printf("%s\n" ,ft_strpbrk("hello", "ole"));
}