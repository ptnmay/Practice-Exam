/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_max.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 01:50:52 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/16 02:00:43 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		max(int* tab, unsigned int len)
{
	int i = 0;
	int n = tab[0];

	if (!tab)
		return(0);
	while(i < len)
	{
		if (n < tab[i])
			n = tab[i];
		i++;
	}
	return(n);
}

int main()
{
	int tab[4];
	tab[0] = 1;
	tab[1] = 11;
	tab[2] = 13;
	tab[3] = 15;
	printf("%d\n", max(tab, 2));
}
