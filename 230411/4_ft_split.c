/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_ft_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 02:26:30 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/11 02:34:08 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void ftstr(char *s)
{
    int i = 0;
    while(s[i])
    {
        write(1, &s[i], 1);
        i++;
    }
}

int space(char s)
{
    if (s >= 9 && s <= 13 || s == 32)
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

    while(space(str[i]) == 1)
        i++;
    while(str[i])
    {
        j = 0;
        while(space(str[i]) == 1)
            i++;
        if (str[i] > 32)
        {
            word = malloc(sizeof(char) * 5000);
        }
        else
            break ;
        while(str[i] > 32)
        {
            word[j] = str[i];
            i++;
            j++;
        }
        word[j] = '\0';
        res[k] = word;
        k++;
    }
    return(res);
}

int main()
{
    int i = 0;
    char *a = "    hello bla bla        bla         ";
    char **s = ft_split(a);
    while(s[i])
    {
        printf("%s\n", s[i]);
        i++;
    }
}