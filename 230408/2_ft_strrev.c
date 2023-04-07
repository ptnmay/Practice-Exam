/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_ft_strrev.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 04:15:24 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/08 04:31:16 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strrev(char *str)
{
	char tmp;
	int len = 0;
	int i = 0;
	int j = 0;
	int size;

	while(str[len])
		len++;
	size = len;
	len--;
	while(i < len) //j <= len / 2
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	str[size] = '\0';
	return(str);
}

int main()
{
	char s[] = "ponmlkjihgfedcba";
	char *ss = ft_strrev(s);
	printf("%s\n", ss);
}
