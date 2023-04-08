/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_paramsam.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 03:09:09 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/09 03:15:40 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    nbr(int n)
{
    if (n > 9)
        nbr(n / 10);
    write(1, &"0123456789"[n % 10], 1);
}

int main(int ac, char **av)
{
    // if (ac > 1)
    // {
    //     nbr(ac - 1);
    // }
    // else
    //     nbr(0);
    // write(1, "\n", 1);

    nbr(ac - 1); //mai
    write(1, "\n", 1);

}