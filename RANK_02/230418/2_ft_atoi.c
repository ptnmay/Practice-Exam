/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_ft_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 00:01:44 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/18 00:37:49 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int space(char s)
{
    if (s >= 9 && s <= 13 || s == 32)
        return(1);
    return(0);
}

int	ft_atoi(const char *str)
{
    int i = 0;
    int res = 0;

    if (str[0] == '-' || str[0] == '+')
        i = 1;
    while(space(str[i]) == 1)
        i++;
    while(str[i] >= '0' && str[i] <= '9')
    {   
        while(space(str[i]) == 1)
            i++;
        if (str[i] == '-' || str[i] == '+')
            return(0);
        res = res * 10 + (str[i] - '0');
        i++;
    }
    if (str[0] == '-')
        return(res * -1);
    return(res);
}

int main()
{
    printf("mine = %d || real = %d\n", ft_atoi("12"), atoi("12"));
    printf("mine = %d || real = %d\n", ft_atoi("-5"), atoi("-5"));
    printf("mine = %d  || real = %d\n", ft_atoi("+4"), atoi("+4"));
    printf("mine = %d  || real = %d\n", ft_atoi("--7"), atoi("--7"));
    printf("mine = %d  || real = %d\n", ft_atoi("++8"), atoi("++8"));
    printf("mine = %d  || real = %d\n", ft_atoi("  6  "), atoi("  6  "));
    printf("mine = %d  || real = %d\n", ft_atoi("2147483647"), atoi("2147483647"));
    printf("mine = %d || real = %d\n", ft_atoi("-2147483648"), atoi("-2147483648"));

    // printf("%d\n", ft_atoi("+12"));
}