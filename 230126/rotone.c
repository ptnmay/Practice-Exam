/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:34:19 by psaeyang          #+#    #+#             */
/*   Updated: 2023/01/26 16:03:42 by psaeyang         ###   ########.fr       */
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
		while(str[i])
		{
			if ((str[i] >= 'a' && str[i] < 'z') || (str[i] >= 'A' && str[i] < 'Z'))
				ft_putchar(str[i] + 1);
			else if (str[i] == 'z' || str[i] == 'Z')
				ft_putchar(str[i] - 25);
			else
				ft_putchar(str[i]);
			i++;
		}
			write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
}
