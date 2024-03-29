/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_swap_bits.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 00:13:06 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/16 00:14:18 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	swap_bits(unsigned char octet)
{
	return((octet >> 4) | (octet << 4));
}
