/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_rostring.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 22:33:16 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/09 23:39:21 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int space(char s)
{
    if (s >= 9 && s <= 13 || s == 32)
        return(1);
    return(0);
}

char **ftsplit(char *s)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char *word;
    char **ret = malloc(sizeof(char *) * 5000);

    while(s[i])
    {
        j = 0;
        while(space(s[i]) == 1)
            i++;
        if (s[i])
            word = malloc(sizeof(char) * 5000);
        else
            break ;
        while(s[i] && space(s[i]) == 0)
        {
            word[j] = s[i];
            i++;
            j++;
        }
        word[j] = '\0';
        ret[k] = word;
        k++;
    }
    return(ret);
}

void    str(char *s)
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
    if (ac != 0)
    {
        int i = 1;
        char **ans = ftsplit(av[1]);

        while(ans[i] != NULL)
        {
            str(ans[i]);
            free(ans[i]);
            write(1, " ", 1);
            i++;
        }
        str(ans[0]);
        free(ans[0]);
        free(ans);
    }
    write(1, "\n", 1);
}