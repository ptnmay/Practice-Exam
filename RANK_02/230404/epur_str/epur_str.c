/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 05:08:19 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/04 05:29:30 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int is_space(char s)
{
    if (s >= 9 && s <= 13 || s == 32)
        return(1);
    return(0);
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i = 0;
        int begin = 0;
        int end = 0;

        while(av[1][end])
            end++;
        end--;
        while (is_space(av[1][end]) == 1)
            end--;

        while(av[1][i] && i <= end)
        {
            while (is_space(av[1][i]) == 1)
            {
                i++;
                begin++;
            }
            if (is_space(av[1][i - 1]) == 1 && (i != begin))
                write(1, " ", 1);
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}