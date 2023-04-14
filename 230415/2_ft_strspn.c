/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_ft_strspn.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 05:06:23 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/15 05:14:50 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strchr(const char *s, char ss)
{
	while(*s)
	{
		if (*s == ss)
			return((char *)s);
		s++;
	}
	return(0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	int i = 0;

	while(s[i])
	{
		if (ft_strchr(accept, s[i]) == 0)
			return(i);
		i++;
	}
	return(i);
}

int main()
{
	int i = ft_strspn("hello", "ok");
	int j = strspn("hello", "ok");
	int k = ft_strspn("hello", "oealh");
	int l = strspn("hello", "oealh");

	printf("%d\n", i);
	printf("%d\n", j);
	printf("%d\n", k);
	printf("%d\n", l);
}
