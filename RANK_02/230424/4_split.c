/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_split.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 04:18:14 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/24 05:50:40 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int space(char s)
{
    if ((s >= 9 && s <= 13) || s == 32)
        return(1);
    return(0);
}

char    **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char *word;
    char **res = malloc(sizeof(char *) * 5000);

    while(str[i])
    {
        while(space(str[i]) == 1)
            i++;
        if (str[i] > 32)
        {
            j = 0;
            word = malloc(sizeof(char) * 5000);
            while(str[i] > 32)
            {
                word[j] = str[i];
                j++;
                i++;
            }
            word[j] = '\0';
            res[k] = word;
            k++;
        }
        else
            break ;
    }
    return(res);
}

int main()
{
    char **res = ft_split("    hel lo   world   ");

    printf("%s\n", res[0]);
    printf("%s\n", res[1]);
    printf("%s\n", res[2]);
}