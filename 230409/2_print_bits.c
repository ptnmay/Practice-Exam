/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_print_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 00:35:01 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/09 00:45:35 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
    int i = 8;
    char bit = 0; //unsigned char

    while(i--)
    {
        bit = (octet >> i & 1) + '0';
        write(1, &bit, 1);
    }
}