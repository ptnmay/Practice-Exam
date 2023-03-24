/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 02:59:33 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/25 03:07:09 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//no finish
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

	s = malloc(sizeof(char) * len + 1);
	while(src[i])
	{
		s[j] = src[i];
		i++;
		j++;
	}
	return(s);
}
