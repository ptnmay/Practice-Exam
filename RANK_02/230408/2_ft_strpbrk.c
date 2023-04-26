/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_ft_strpbrk.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 03:46:16 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/08 03:55:23 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	while(*s1)
	{
		int i = 0;
		while(s2[i])
		{
			if (*s1 == s2[i])
				return((char *)s1);
			i++;
		}
		s1++;
	}
	return(0);
}

int main()
{
	char *s = "ihavetowakeup8";
	char *ss = "z";

	printf("%s\n", ft_strpbrk(s, ss));
	printf("%s\n", strpbrk(s, ss));

}
