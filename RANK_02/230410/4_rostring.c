/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_rostring.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 18:41:08 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/10 19:10:10 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void    ftstr(char *s)
{
    int i = 0;

    while(s[i])
    {
        write(1, &s[i], 1);
        i++;
    }
}

int spacen(char s)
{
    if ((s >= 9 && s <= 13) || s == 32)
        return(1);
    return(0);
}

char **ftsplit(char *s)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char *word;
    char **res = malloc(sizeof(char *) * 5000);

    while(spacen(s[i]) == 1)
        i++;
    while(s[i])
    {
        j = 0;
        while(spacen(s[i]) == 1)
            i++;
        if (s[i])
            word = malloc(sizeof(char) * 5000);
        else
            break ; //if not char break;
        while(s[i] && s[i] > 32)
        {
            word[j] = s[i];
            i++;
            j++;
        }
        word[j] = '\0';
        res[k] = word;
        k++;
    }
    return(res);
}

int main(int ac, char **av)
{
    if (ac > 1)
    {
        int i = 1;
        char **res = ftsplit(av[1]);
        while(res[i])
        {
            ftstr(res[i]);
            write(1, " ", 1);
            i++;
        }
        ftstr(res[0]);
    }
    write(1, "\n", 1);
}