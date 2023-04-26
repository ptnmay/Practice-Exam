/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 17:11:32 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/02 17:16:32 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int tapce(char c)
{
    if (c >= 9 && c <= 13 || c == 32)
        return(1);
    return(0);
}


int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i = 0;
        int end = 0;

        while(av[1][end])
            end++;
        end--;
        while(tapce(av[1][end]) == 1)
            end--;
        
    }
}