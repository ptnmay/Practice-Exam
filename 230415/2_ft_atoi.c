/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_atoi.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 03:58:11 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/15 04:48:22 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int isnum(char n)
{
	if (n >= '0' && n <= '9')
		return(1);
	return(0);
}

int space(char s)
{
	if (s >= 9 && s <= 13 || s == 32)
		return(1);
	return(0);
}

int	ft_atoi(const char *str)
{
	int i = 0;
	int res = 0;

	while(str[i])
	{
		while(space(str[i]) == 1)
			i++;
		if (str[i] == '-' || str[i] == '+')
		{
			i++;
			if (str[i] == '-' || str[i] == '+')
				break ;
		}
		if (isnum(str[i]) == 1)
		{
			res = res * 10 + (str[i] - '0');
			i++;
		}
	}
	if (str[0] == '-' && str[1] != '-')
		res = res * -1;
	return(res);
}

int main()
{
	printf("12 = 	%d\n", ft_atoi("12"));
	printf("12 = 	%d\n", atoi("12"));
	printf("-14 = 	%d\n", ft_atoi("-14"));
	printf("-14 = 	%d\n", atoi("-14"));
	printf("--23 = 	%d\n", ft_atoi("--23"));
	printf("--23 = 	%d\n", atoi("--23"));
	printf("+44 = 	%d\n", ft_atoi("+44"));
	printf("+44 = 	%d\n", atoi("+44"));
	printf("++99 = 	%d\n", ft_atoi("++99"));
	printf("++99 = 	%d\n", atoi("++99"));
	printf("2147483647 = 	%d\n", ft_atoi("2147483647"));
	printf("2147483647 = 	%d\n", atoi("2147483647"));
	printf("-2147483648 = 	%d\n", ft_atoi("-2147483648"));
	printf("-2147483648 = 	%d\n", atoi("-2147483648"));
}
