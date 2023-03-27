/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 04:20:24 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/28 04:49:22 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int is_space(char c)
{
    if ((c >= 9 && c <= 13) || c == 32)
        return(1);
    return (0);
}

int is_upper(char c)
{
    if (c >= 'A' && c <= 'Z')
        return (1);
    return (0);
}

int is_lower(char c)
{
    if (c >= 'a' && c <= 'z')
        return (1);
    return (0);
}

void    ft_putchar (char c)
{
    write(1, &c, 1);
}

void    ft_cap(char *s)
{
    int i = 0;

    if (s[i] == '\0')
        return ;
    if (is_lower(s[i]) == 1)
        ft_putchar(s[i] - 32);
    i++;
    while(s[i])
    {
        if (is_upper(s[i]) == 1)
            s[i] = s[i] + 32;
        if (is_space(s[i - 1]) == 1 && is_lower(s[i]) == 1)
            s[i] = s[i] + 32;
        ft_putchar(s[i]);
        i++;
    }
}

int main(int ac, char **av)
{
    int i = 1;

    if (ac > 1)
    {
        while (i < ac)
        {
            ft_cap(av[i]);
            i++;
        }
    }
    write(1, "\n", 1);

}

// int main(int ac, char **av)
// {
//     int i = 0;
//     int j = 0;
    
//     if(ac > 1)
//     {
//         while(av[i])
//         {
//             if(av[i][j] == '\0')
//                 break ;
//             if (is_lower(av[i][j] == 1))
//                 av[i][j] = av[i][j] - 32;
//             write(1, &av[i][j], 1);
//             j++;
//             while(av[i][j])
//             {
//                 if(is_upper(av[i][j] == 1))
//                     av[i][j] = av[i][j] + 32;
//                 if (is_space(av[i][j - 1]) == 1 && is_lower(av[i][j]) == 1)
//                     av[i][j] = av[i][j] - 32;
//                 write(1, &av[i][j], 1);
//                 j++;
//             }
//             write(1, "\n", 1);
//             i++;
//         }
//     }
//     else
//         write(1, "\n", 1);
// }