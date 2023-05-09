/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_rev_wstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 00:54:48 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/18 01:15:39 by psaeyang         ###   ########.fr       */
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

char **ft_split(char *s)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char *word;
    char **res = malloc(sizeof(char *) * 5000);

    while(s[i])
    {
        while(space(s[i])== 1)
            i++;
        if (s[i] > 32)
        {
            word = malloc(sizeof(char) * 5000);
            j = 0;
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

int len(char **s)
{
    int i = 0;
    while(s[i])
        i++;
    return(i);
}

void strput(char *s)
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
        char **split = ft_split(av[1]);
        int end = len(split);
        end--;
        while(end >= 0)
        {
            strput(split[end]);
            if (end > 0)
                write(1, " ", 1);
            end--;
        }
    }
    write(1, "\n", 1);
}