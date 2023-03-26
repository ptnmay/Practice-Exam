/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 05:44:18 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/27 05:54:29 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strspn(const char *s, const char *accept)
{
    int i = 0;

    while(s[i])
    {
        int j = 0;
        while (accept[j])
        {
            if (s[i] == accept[j])
                // return(i++);
                break ;
            j++;
        }
        i++;
    }
    i = i - 1;
    return(i);
}

//didn't get it that much

int main()
{
    printf("strspn = %lu\n" ,      strspn("bhbbbbc","abh"));
    printf("ft_strspn = %lu\n" ,ft_strspn("bhbbbbc","abh"));
}