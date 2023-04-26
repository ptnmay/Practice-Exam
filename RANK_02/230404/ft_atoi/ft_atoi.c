/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 16:54:29 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/04 17:36:01 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
    int res = 0;
    int i = 0;
    int j = 1;

    while(str[i] == 32)
        i++;

    // while(str[i])
    while((str[i] >= '0' && str[i] <= '9') || str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-' || str[i] == '+')
        {
            if (str[i] == '-')
                j = -1;
            i++;
            if (str[i] == '-' || str[i] == '+')
                return(0);
        }
            res = res * 10 + (str[i] - '0');
            i++;
    }
    return(res * j);
}

// int main()
// {
//     printf("12 ft_atoi    == %d\n", ft_atoi("12"));
//     printf("12 atoi       == %d\n", atoi("12"));
//     printf("-12 ft_atoi   == %d\n", ft_atoi("-12"));
//     printf("-12 atoi      == %d\n", atoi("-12"));
//     printf("--5 ft_atoi   == %d\n", ft_atoi("--5"));
//     printf("--5 atoi      == %d\n", atoi("--5"));
//     printf("hello ft_atoi == %d\n", ft_atoi("hello"));
//     printf("hello atoi    == %d\n", atoi("hello"));
//     printf("13268! ft_atoi    == %d\n", ft_atoi("13268!"));
//     printf("13268! atoi       == %d\n", atoi("13268!"));
// }