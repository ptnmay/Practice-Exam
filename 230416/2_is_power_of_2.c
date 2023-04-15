/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_is_power_of_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 01:44:04 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/16 01:49:25 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
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
	printf("1 =  %d\n", is_power_of_2(1));
	printf("4 =  %d\n", is_power_of_2(4));
	printf("3 =  %d\n", is_power_of_2(3));
	printf("9 =  %d\n", is_power_of_2(9));
	printf("12 = %d\n", is_power_of_2(12));
	printf("16 = %d\n", is_power_of_2(16));
}
