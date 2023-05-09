/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 09:01:14 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/20 09:16:17 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
    int i = 0;
    int res = 0;

    while(str[i])
    {
        if (str[0] == '-' || str[0] == '+')
            i++;
        while (str[i] >= '0' && str[i] <= '9')
        {
            res = res * 10 + (str[i] - '0');
            i++;
        }
        if (!(str[i] >= '0' && str[i] <= '9'))
            break ;
        i++;
    }
    if (str[0] == '-')
        return(res * -1);
    return(res);
}

int main()
{
    printf("%d\n", ft_atoi("-+12"));
    printf("%d\n", atoi("-+12"));
    printf("%d\n", ft_atoi("++12"));
    printf("%d\n", atoi("++12"));
    printf("%d\n", ft_atoi("-12"));
    printf("%d\n", atoi("-12"));
    printf("%d\n", ft_atoi("+12"));
    printf("%d\n", atoi("+12"));
    printf("%d\n", ft_atoi("12"));
    printf("%d\n", atoi("12"));
}