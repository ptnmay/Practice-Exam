/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_split.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 22:52:13 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/20 22:57:56 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

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
            {
                word[j] = str[i];
                i++;
                j++;
            }
            word[j] = '\0';
            res[k] = word;
            k++;
        }
        else
            break ;
    }
    return(res);
}

int main()
{
	char **res = ft_split("     hello      world  bla bla");
	printf("res 0 = %s\n", res[0]);
	printf("res 1 = %s\n", res[1]);
	printf("res 2 = %s\n", res[2]);
	printf("res 3 = %s\n", res[3]);
	printf("res 4 = %s\n", res[4]);
}