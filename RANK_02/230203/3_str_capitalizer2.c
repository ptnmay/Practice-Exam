/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_str_capitalizer2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 10:48:53 by psaeyang          #+#    #+#             */
/*   Updated: 2023/02/03 11:03:12 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_isspace(char s)
{
	if (s >= 9 && s <= 13)
		return(1);
	return(0);
}

int ft_upper(char s)
{
	if (s >= 'A' && s <= 'Z')
		return(1);
	return(0);
}

int ft_lower(char s)
{
	if (s >= 'a' && s <= 'z')
		return(1);
	return(0);
}

int main(int ac, char **av)
{
	int i = 0;
	int j = 0;

	if (ac > 1)
	{
		while(av[i])
		{
			while(av[i][j])
			{
				if (ft_upper(av[i][0]) == 0)
				{
					av[i][0] = av[i][0] - 32;
					write(1, &av[i][0], 1);
					j++;
				}
				else if (ft_upper(av[i][0]) == 1)
				{
					write(1, &av[i][0], 1);
					j++;
				}
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
