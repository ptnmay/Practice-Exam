/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reversebits.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 09:20:50 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/20 09:21:42 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//remember

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