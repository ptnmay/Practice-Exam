/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:53:38 by psaeyang          #+#    #+#             */
/*   Updated: 2023/01/26 15:05:33 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char a)
{
	write(1, &a, 1);
}

int main(int ac, char **av)
{
	int i = 0;
	char *str = av[1];

	if (ac == 2)
	{
		while (str[i])
		{
			if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
				ft_putchar(str[i] + 13);
			else if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
				ft_putchar(str[i] - 13);
			else
				ft_putchar(str[i]);
			i++;
		}
	}
		write(1, "\n", 1);
}
