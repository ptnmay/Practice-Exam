/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_is_power_of_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 04:48:46 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/17 04:52:13 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	    is_power_of_2(unsigned int n)
{
	while(n)
	{
		if (n % 2 == 1 && n != 1)
			return(0);
		n /= 2;
	}
	return(1);
}

int main()
{
	printf("%d\n", is_power_of_2(2));
	printf("%d\n", is_power_of_2(3));
	printf("%d\n", is_power_of_2(8));
}
