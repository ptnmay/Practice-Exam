/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_rostring.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 16:09:17 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/21 17:01:04 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void printstr(char *s)
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
    if ((s >= 9 && s <= 13) || s == 32)
        return(1);
    return(0);
}

char **ft_split(char *s)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char *word;
    char **res = malloc(sizeof(char *) * 5000);

    while(s[i])
    {
        while(space(s[i]) == 1)
            i++;
        if (s[i] > 32)
        {
            j = 0;
            word = malloc(sizeof(char) * 5000);
            while(s[i] > 32)
                word[j++] = s[i++];
            word[j] = '\0';
            res[k] = word;
            k++;
        }
        else
            break ;
    }
    return(res);
}

int main(int ac, char **av)
{
	if (ac > 1)
    {
        char **res = ft_split(av[1]);
        int i = 1;

        while(res[i])
        {
            printstr(res[i]);
            write(1, " ", 1);
            free(res[i]);
            i++;
        }
        printstr(res[0]);
        free(res[0]);
    }
    write(1, "\n", 1);
}