/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 19:12:40 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/12 19:25:58 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main()
{
	int i = 1;
	int j = 2;
	int *a = &i;
	int *b = &j;
	printf("a bf == %d\n", i);
	printf("b bf == %d\n", j);
	ft_swap(a, b);
	printf("==============\n");
	printf("a af == %d\n", i);
	printf("b af == %d\n", j);
}
