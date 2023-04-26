/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_ft_atoi_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 03:02:12 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/16 03:17:19 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return(c + 32);
	return(c);
}

int get_digit(char c)
{
	if (c >= '0' && c <= '9')
		return(c - '0');
	else if (c >= 'a' && c <= 'z')
		return(c - 'a' + 10);
	else
		return(-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int digit = 0;
	int i = 0;
	int res = 0;

	while((digit = get_digit(lower(str[i]))) >= 0)
	{
		// res = res * str_base;
		// res = res + digit;
		res = res * str_base + digit;
		//same
		i++;
	}
	return(res);
}

int main()
{
	printf("%d\n", ft_atoi_base("1a", 16));
}
