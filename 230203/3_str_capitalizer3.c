/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_str_capitalizer3.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 11:13:11 by psaeyang          #+#    #+#             */
/*   Updated: 2023/02/03 12:47:00 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_isspace(char s)
{
	if (s == 32 || (s >= 9 && s<= 13))
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
			if (av[i][j] == '\0')
				break;
			if (ft_lower(av[i][j]) == 1)
				av[i][j] = av[i][j] - 32;
			write(1, &av[i][j], 1);
			j++;
			while(av[i][j])
			{
				if(ft_upper(av[i][j]) == 1)
					av[i][j] = av[i][j] + 32;
				if (ft_isspace(av[i][j - 1]) == 1 && ft_lower(av[i][j] == 1))
					av[i][j] = av[i][j] - 32;
				write(1, &av[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	write(1, "\n", 1);


}
