/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_ft_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 03:00:46 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/17 03:56:06 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int space(char c)
{
	if (c >= 9 && c <= 13 || c == 32)
		return(1);
	return(0);
}

//first wrong case "  hello   world   "
//just else break ;
// char    **ft_split(char *str)
// {
// 	int i = 0;
// 	int j = 0;
// 	int k = 0;
// 	char *word;
// 	char **res = malloc(sizeof(char *) * 5000);

// 	while(str[i])
// 	{
// 		while(space(str[i]) == 1)
// 			i++;
// 		if (str[i] > 32)
// 		{
// 			word = malloc(sizeof(char *) * 5000);
// 			j = 0;
// 			while(str[i] > 32)
// 			{
// 				word[j] = str[i];
// 				i++;
// 				j++;
// 			}
// 		}
// 		else
// 			break ;
// 		word[j] = '\0';
// 		res[k] = word;
// 		k++;
// 	}
// 	return(res);
// }

//second
char    **ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char *word;
	char **res = malloc(sizeof(char *) * 5000);

	while(space(str[i]) == 1)
		i++;
	while(str[i])
	{
		while(space(str[i]) == 1)
			i++;
		if (str[i] > 32)
		{
			word = malloc(sizeof(char) * 5000);
			j = 0;
			while(str[i] > 32)
			{
				word[j] = str[i];
				i++;
				j++;
			}
		}
		else
			break ;
		word[j] = '\0';
		res[k] = word;
		k++;
	}
	return(res);
}

int main()
{
	char **res = ft_split("     hello      world  ");
	printf("res 0 = %s\n", res[0]);
	printf("res 1 = %s\n", res[1]);
	printf("res 2 = %s\n", res[2]);
	printf("res 3 = %s\n", res[3]);
	printf("res 4 = %s\n", res[4]);
}
