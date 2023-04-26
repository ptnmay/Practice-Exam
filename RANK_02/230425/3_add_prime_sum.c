/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_add_prime_sum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 21:15:48 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/23 21:27:40 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int n)
{
    if (n > 9)
        ft_putnbr(n / 10);
    write(1, &"0123456789"[n % 10], 1);
}

int ft_atoi(char *s)
{
    int i = 0;
    int res = 0;

    while(s[i] >= '0' && s[i] <= '9')
    {
        res = (res * 10) + s[i] - '0';
        i++;
    }
    return(res);
}

int is_prime(int num)
{
	int i = 3;
	
	if (num <= 1)
		return (0);
	if (num % 2 == 0 && num > 2)
		return (0);
	while (i < (num / 2))
	{
		if (num % i == 0)
			return 0;
		i += 2;
	}
	return 1;
}

int main(int ac, char **av)
{
	int sum = 0;
	int nb = ft_atoi(av[1]);
	
	if (ac == 2)
	{
		while (nb > 0)
        {
			if (is_prime(nb) != 0)
				sum += (nb);
            nb--;
        }
		ft_putnbr(sum);
	}
	if (ac != 2)
		ft_putnbr(0);
	write(1, "\n", 1);
	return (0);
}