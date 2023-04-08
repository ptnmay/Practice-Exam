/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_expand_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 03:15:55 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/09 03:41:42 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void    str(char *s)
{
    int i = 0;

    while (s[i])
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

char **ftsplit(char *s)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char **ret;
    char *word;

    ret = malloc(sizeof(char *) * 5000);
    while(s[i])
    {
        j = 0;
        while(space(s[i]) == 1)
            i++;
        if(s[i])
            word = malloc(sizeof(char) * 5000);
        else
            break ;
        while(s[i] && (space(s[i]) == 0))
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

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i = 0;
        int j = 0;
        char **split = ftsplit(av[1]);

        while(split[j])
            j++;
        while(split[i])
        {
            str(split[i]);
            if (i != j - 1)
                write(1, "   ", 3);
            i++;
        }
    }
    write(1, "\n", 1);
}
