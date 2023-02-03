/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_str_capitalizer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 09:58:37 by psaeyang          #+#    #+#             */
/*   Updated: 2023/02/03 10:47:16 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_isspace(char s)
{
	if (s == 32 || (s >= 9 && s <= 13))
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
			if (ft_upper(av[i][0] == 1))
			{
				write(1, &av[i][0], 1);
				j++;
			}
			if (ft_isspace(av[i][j]) == 1)
			{
				write(1, &av[i][j], 1);
				j++;
			}
			if (ft_lower(av[i][j]) == 1)
			{
				write(1, &av[i][j], 1);
				j++;
			}
			else if (ft_upper(av[i][j]) == 1)
			{
				av[i][j] = av[i][j] + 32;
				write(1, &av[i][j], 1);
				j++;
			}

			// if (ft_lower(av[i][j]) == 0 || ft_upper(av[i][j] == 0))
			// {
			// 	write(1, av[i][j], 1);
			// 	j++;
			// }
			// if (ft_isspace(av[i][--j] == 1) && ft_lower(av[i][j] == 1))
			// {
			// 	av[i][j] = av[i][j] - 32;
			// 	write(1, av[i][j], 1);
			// 	j++;
			// }
			i++;
		}
	}
	write(1, "\n", 1);
}
