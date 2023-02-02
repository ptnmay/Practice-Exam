/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_ft_strrev2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:23:31 by psaeyang          #+#    #+#             */
/*   Updated: 2023/02/02 15:37:28 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char    *ft_strrev(char *str)
{
	int i = 0;
	int j = 0;
	char t;

	while (str[i])
		i++;
	i = i - 1; //skip \0
	while (i > j)
	{
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
	str[0] = 'e';
	str[1] = 'v';
	str[2] = 'o';
	str[3] = 'l';
	str[4] = '\0';
	printf("%s\n", ft_strrev(str));
}
