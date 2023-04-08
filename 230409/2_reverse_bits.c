/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_reverse_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 00:38:05 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/09 00:45:21 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
    int i = 8;
    unsigned char res = 0;

    while(i--)
    {
        res = res * 2 + (octet % 2);
        octet = octet / 2;
    }
    return(res);
}
