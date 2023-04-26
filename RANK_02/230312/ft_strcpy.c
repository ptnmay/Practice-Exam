/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 18:53:16 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/12 19:12:03 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while(s1[i] && s2[j])
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return(s1);
}

int main()
{
	char s1[] = "abcdefg";
	char s2[] = "hello";
	printf("%s\n", ft_strcpy(s1, s2));
}
