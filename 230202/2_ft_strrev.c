/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_ft_strrev.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 13:55:03 by psaeyang          #+#    #+#             */
/*   Updated: 2023/02/02 15:22:02 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char *ft_strrev(char *str)
{
	int i = 0;
	int j = 0;
	char t;

	while(str[i])
	{
		i++;
	}
	i = i - 1;
	while(i > j)
	{
		// str[j] = str[i];
		// i--;
		// j++;
		t = str[i];
		str[i] = str[j];
		str[j] = t;
		i--;
		j++;
	}
	return(str);
}

int main(void)
{
	char str[10];
	str[0] = 's';
	str[1] = 'r';
	str[2] = 'e';
	str[3] = 't';
	str[4] = 'a';
	str[5] = 'w';
	str[6] = '\0';
	printf("%s\n", (ft_strrev(str)));
}
