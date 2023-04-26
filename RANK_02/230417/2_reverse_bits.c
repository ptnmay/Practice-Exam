/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_reverse_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 04:40:20 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/17 04:41:37 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
