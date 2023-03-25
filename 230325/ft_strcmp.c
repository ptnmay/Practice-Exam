/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 21:48:20 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/25 22:19:59 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int    ft_strcmp(char *s1, char *s2)
{
    int i = 0;
	int ans = 0;

	while(s1[i] && s2[i] && (s1[i] == s2[i]))
		i++;
	ans = s1[i] - s2[i];
	return(ans);
}

int main(void)
{
	char *s1 = "azd";
	char *s2 = "abc";

	printf("%d\n", ft_strcmp(s1, s2));
}