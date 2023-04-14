/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_ft_strpbrk.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 05:03:21 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/15 05:06:12 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int i = 0;

	while(*s1)
	{
		i = 0;
		while(s2[i])
		{
			if (*s1 == s2[i])
				return((char *) s1);
			i++;
		}
		s1++;
	}
	return(0);
}

int main()
{
	char *s = ft_strpbrk("helo", "a");
	char *ss = ft_strpbrk("helo", "a");
	printf("%s\n", s);
	printf("%s\n", ss);
}
