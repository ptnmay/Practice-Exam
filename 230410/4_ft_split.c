/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_ft_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 01:41:16 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/10 01:49:59 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

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

    while(str[i])
    {
        j = 0;
        while(space(str[i]) == 1)
            i++;
        if (str[i])
            word = malloc(sizeof(char) * 50000);
        while(str[i] && space(str[i]) == 0)
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
    char *str = "hello world bla bla bla";
    char **s = ft_split(str);

    printf("%s\n", s[0]);
    printf("%s\n", s[1]);
    printf("%s\n", s[2]);
    printf("%s\n", s[3]);
    printf("%s\n", s[4]);
    printf("%s\n", s[5]);
}