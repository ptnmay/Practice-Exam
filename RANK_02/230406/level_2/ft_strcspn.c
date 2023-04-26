/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 04:57:03 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/06 05:05:49 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    int i = 0;

    while(s[i])
    {
        int j = 0;
        while(reject[j])
        {
            if (s[i] == reject[j])
                return(i);
            j++;
        }
        i++;
    }
    return(i);
}

int main()
{
    printf("%lu\n", strcspn("hello", "olleh"));
    printf("%lu\n", ft_strcspn("hello", "olleh"));
}