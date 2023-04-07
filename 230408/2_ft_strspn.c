/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_ft_strspn.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 03:20:37 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/08 03:45:03 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

char *ftstrchr(const char *s, char c)
{
	while(*s)
	{
		if (*s == c)
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
		if (ftstrchr(accept, s[i]) == 0)
			return(i);
		i++;
	}
	return(i);
}

int main()
{
	char *s = "hello";
	char *ss = "elhlo";

	printf("%lu\n", ft_strspn(s, ss));
	printf("%lu\n", strspn(s, ss));
}
