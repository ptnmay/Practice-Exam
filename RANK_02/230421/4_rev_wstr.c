/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_rev_wstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 17:01:50 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/21 17:11:17 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int space(char s)
{
    if ((s >= 9 && s <= 13) || s == 32)
        return(1);
    return(0);
}

char **split(char *s)
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

void printstr(char *s)
{
    int i = 0;

    while(s[i])
    {
        write(1, &s[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i = 0;
        char **res = split(av[1]);
        while(res[i])
            i++;
        i--;
        while(i >= 0)
        {
            printstr(res[i]);
            if (i > 0)
                write(1, " ", 1);
            i--;
        }
    }
    write(1, "\n", 1);
}