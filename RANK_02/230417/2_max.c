/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_max.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 04:44:22 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/17 04:48:25 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		max(int* tab, unsigned int len)
{
	int tmp = tab[0];
	int i = 0;
	while(i < len)
	{
		if (tab[i] > tmp)
			tmp = tab[i];
		i++;
	}
	return(tmp);
}

int main()
{
	int tab[4];
	tab[0] = 10;
	tab[1] = 1;
	tab[2] = 30;
	tab[3] = 5;
	printf("%d\n", max(tab, 4));
}

