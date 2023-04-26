/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 00:21:45 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/26 04:14:37 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    int i = 0;
    while (s[i])
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

int	main(void)
{
	printf("%lu\n", strcspn("cccfcccc", "f"));
	printf("%lu\n", ft_strcspn("cccfcccc", "f"));
    
}