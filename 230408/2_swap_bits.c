/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_swap_bits.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 23:02:22 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/08 23:03:19 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	swap_bits(unsigned char octet)
{
    return((octet >> 4) | (octet << 4));
}