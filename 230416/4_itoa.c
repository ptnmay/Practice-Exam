/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_itoa.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 03:17:47 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/16 04:22:05 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	int n = nbr;
	int len = 0;

	if (n <= 0)
	{
		// if (n < 0)
		// 	len++;
		//no need
		len++;
	}

	while(n)
	{
		n /= 10;
		len++;
	}
	char *res = malloc(sizeof(char) * (len + 1));
	res[len] = '\0';
	if (nbr == 0)
	{
		res[0] = '0';
		return(res);
	}
	if (nbr < 0)
	{
		res[0] = '-';
		nbr = -nbr;
	}
	while(nbr)
	{
		res[--len] = nbr % 10 + '0';
		nbr /= 10;
	}
	return(res);
}

int main()
{
	printf("%s\n", ft_itoa(12));
	printf("%s\n", ft_itoa(-14));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(3456789));
}
