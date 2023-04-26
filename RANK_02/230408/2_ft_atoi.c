/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_ft_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 03:56:44 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/08 04:14:33 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int space(char s)
{
	if (s >= 9 && s <= 13 || s == 32)
		return(1);
	return(0);
}

int	ft_atoi(const char *str)
{
	int i = 0;
	int ans = 0;

	if (str[0] == '+' || str[0] == '-')
		i++;
	while(space(str[i]) == 1)
		i++;
	while(str[i] >= '0' && str[i] <= '9')
	{
		ans = ans * 10 + (str[i] - '0');
		i++;
	}
	if (str[0] == '-')
		ans = ans * -1;
	return(ans);
}

int main()
{
	char *s = "          21  47483649";
	printf("%d\n", ft_atoi(s));
	printf("%d\n", atoi(s));
}
