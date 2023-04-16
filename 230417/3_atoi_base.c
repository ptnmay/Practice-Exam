/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_atoi_base.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 03:58:08 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/17 04:37:07 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char lower(char s)
{
	if (s >= 'A' && s <= 'Z')
		return(s + 32);
	else
		return(s);
}

int get_digit(char s)
{
	if (s >= '0' && s <= '9')
		return(s - '0');
	//wrong here sometime confuse with - '0' and + '0'
	else if (s >= 'a' && s <= 'z')
		return(s - 'a' + 10);
	else
		return(-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int i = 0;
	int digit = 0;
	int res = 0;

	while((digit = get_digit(lower(str[i]))) >= 0)
	{
		res = res * str_base + digit;
		//and wrong here res * digit + str_base
		i++;
	}
	return(res);
}

int main()
{
	printf("a = %d\n", ft_atoi_base("a", 16));
	printf("b = %d\n", ft_atoi_base("b", 16));
	printf("f = %d\n", ft_atoi_base("f", 16));
	printf("0010 = %d\n", ft_atoi_base("0010", 2));
}
