/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_first_word.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 09:32:17 by psaeyang          #+#    #+#             */
/*   Updated: 2023/02/03 09:47:42 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_isspace(char str)
{
	if (str == 32 || (str >= 9 && str <= 13))
		return(1);
	return(0);
}

int main(int ac, char ** av)
{
	int i = 0;

	if (ac == 2)
	{
		while(ft_isspace(av[1][i]) == 1)
			i++;
		while(ft_isspace(av[1][i]) == 0)
		{
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
