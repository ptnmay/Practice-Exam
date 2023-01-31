/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_inter.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 23:48:19 by psaeyang          #+#    #+#             */
/*   Updated: 2023/01/31 08:48:03 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_check(char *s1, char s2, int len)
{
	int i = 0;

	while(s1[i] && (i < len || len == -1))
	{
		if (s1[i] == s2)
			return(1);
		i++;
	}
	return(0);
}

int main(int ac, char **av)
{
	int i = 0;

	if (ac == 3)
	{
		while
	}
}
