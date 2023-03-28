/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 03:38:47 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/29 03:42:04 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
    int i = 8;
    unsigned char res = 0;

    while (i > 0)
    {
        res = res * 2 + (octet % 2);
        octet = octet / 2;
        i--;
    }
    return(res);


    //wrong
    //print bits
    // int i = 8;
    // unsigned char bit;

    // while(i--)
    // {
    //     bit = (octet % 2 & 1) + '0';
    //     write(1, &bit, 1);
    // }
}