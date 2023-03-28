/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 17:02:42 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/28 17:06:48 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//remember

void	print_bits(unsigned char octet)
{
    int i = 8;
    unsigned char bit;

    while(i--)
    {
        bit = (octet >> i & 1) + '0';
        write(1, &bit, 1);
    }
}