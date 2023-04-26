/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_split.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 11:17:02 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/25 11:30:01 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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
                word[j++] = str[i++];
            word[j] = '\0';
            res[k++] = word;
        }
        else
            break ;
    }
    return(res);
}

int main()
{
    char **res = ft_split("werthjhgfdsdfghgfgffgvd  dfgsg");

    printf("%s\n", res[0]);
    printf("%s\n", res[1]);
    printf("%s\n", res[2]);
    printf("%s\n", res[3]);
}