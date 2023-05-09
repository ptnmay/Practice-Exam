/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_rostring.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 00:39:22 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/18 00:51:58 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int space(char s)
{
    if (s >= 9 && s <= 13 || s == 32)
        return(1);
    return(0);
}

char **ft_split(char *s)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char *word;
    char **res = malloc(sizeof(char *) * 50000);

    while(s[i])
    {
        while(space(s[i]) == 1)
            i++;
        if (s[i] > 32)
        {
            j = 0;
            word = malloc(sizeof(char) * 5000);
            while(s[i] > 32)
            {
                word[j] = s[i];
                i++;
                j++;
            }
        }
        else
            break ;
        word[j] = '\0';
        res[k] = word;
        k++;
    }
    return(res);
}

void putstring(char *s)
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
    if (ac > 1)
    {
        int i = 1;
        char **split = ft_split(av[1]);

        while(split[i])
        {
            putstring(split[i]);
            i++;
            write(1, " ", 1);
        }
        putstring(split[0]);
    }
    write(1, "\n", 1);
}