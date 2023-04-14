/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_print_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 05:36:00 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/15 05:56:38 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void nbr(int n)
{
	if (n > 16)
		nbr(n / 16);
	write(1, &"0123456789abcdef"[ n % 16], 1);
}

int ftatoi(char *s)
{
	int i = 0;
	int res = 0;

	while(s[i] >= '0' && s[i] <= '9')
	{
		res = res * 10 + (s[i] - '0');
		i++;
	}
	return(res);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int n = 0;

		n = ftatoi(av[1]);
		nbr(n);
	}
	write(1, "\n", 1);
}
