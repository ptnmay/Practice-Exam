/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_inter.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 01:58:51 by psaeyang          #+#    #+#             */
/*   Updated: 2023/01/28 02:46:28 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_strchr(char *str, char a)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] == a)
		{
			return(1);
		}
		else
			return(0);
	}
}

int main(int ac, char **av)
{
	int i = 0;
	int j = 0;

	if (ac == 3)
	{
		while(av[1][i])
			i++;
		while(j < i)
		{
			j = 0;
			if((ft_strchr(av[1][j], av[1][i]) == 1))
			{
				write(1, '=', 1);
				i--;
				j++;
			}
		}
	}
}
