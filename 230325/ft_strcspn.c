/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 22:28:44 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/26 00:20:18 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// size_t	ft_strcspn(const char *s, const char *reject)
// {
    
// }


//mew
#include<stdio.h>
#include<string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return(i);
			j++;
		}
		i++;
	}
	return(i);
}

int	main(void)
{
	printf("%lu\n" ,    strcspn("ABCDEF4960910", "z013"));
	printf("%lu\n" ,    ft_strcspn("ABCDEF4960910", "z013"));
    
}