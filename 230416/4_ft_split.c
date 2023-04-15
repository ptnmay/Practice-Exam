/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_ft_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 01:09:33 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/16 01:22:49 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int space(char c)
{
	if (c >= 9 && c <= 13 || c == 32)
		return(1);
	return(0);
}

char    **ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char *word;
	char **res = malloc(sizeof(char *) * 5000);

	while(str[i])
	{
		while(space(str[i]) == 1)
			i++;
		if (str[i] > 32)
		{
			j = 0;
			word = malloc(sizeof(char) * 5000);
			while(str[i] > 32)
			{
				word[j] = str[i];
				i++;
				j++;
			}
		}
		word[j] = '\0';
		res[k] = word;
		k++;
	}
	return(res);
}

int main()
{
	char *s = "     hello world          bla";
	char **ss = ft_split(s);
	printf("%s\n", ss[0]);
	printf("%s\n", ss[1]);
	printf("%s\n", ss[2]);
	printf("%s\n", ss[3]);
}
