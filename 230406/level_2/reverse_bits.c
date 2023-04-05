/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 02:00:52 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/06 02:24:35 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
    int i = 8;
    unsigned char bit = 0;
    while(i--)
    {
        bit = (octet >> i & 1) + '0';
        write(1, &bit, 1);
    }
}

unsigned char	reverse_bits(unsigned char octet)
{
    int i = 8;
    unsigned char res;
    while(i--)
    {
        res = res * 2 + (octet % 2);
        octet = octet / 2;
    }
    return(res);
}

int main()
{
    print_bits(reverse_bits(0b11010111));
}