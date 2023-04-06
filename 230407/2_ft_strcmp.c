/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_ft_strcpm.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 03:34:24 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/07 03:37:41 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

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
	char *s1 = "abcz";
	char *s2 = "abc";

	printf("%d\n", ft_strcmp(s1, s2));
	printf("%d\n", strcmp(s1, s2));
}
