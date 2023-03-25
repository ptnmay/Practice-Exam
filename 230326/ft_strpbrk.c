/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 04:32:23 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/26 04:38:49 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strpbrk(const char *s1, const char *s2)
{
    int i = 0;
    while (*s1)
    {
        int j = 0;
        while (s2[j])
        {
            if (*s1 == s2[j])
                return((char *)(s1)); //return pointer s1
            j++;
        }
        // i++;
        s1++;
    }
    return(0);
}

int main(void)
{
    printf("%s\n" ,   strpbrk("hello", "l"));
    printf("%s\n" ,ft_strpbrk("hello", "l"));

}

//s1[i] not work | change to *s1