/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 02:59:33 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/25 20:51:49 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_strlen(char *s)
{
	int i = 0;
	while (s[i])
		i++;
	return (i);
}

char    *ft_strdup(char *src)
{
	char *s;
	int i = 0;
	int j = 0;
	int len = ft_strlen(src);

	if (!src)
		return (NULL);
	s = malloc(sizeof(char) * len + 1);
	while(src[i])
	{
		s[j] = src[i];
		i++;
		j++;
	}
	s[j] = '\0';
	return(s);
}

int main(void)
{
	char *s = "hello\n";
	char *a = ft_strdup(s);
	char *b = strdup(s);
	printf("my dup = %s", a);
	printf("real dup = %s", b);
}
