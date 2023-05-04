/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   230504.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:07:31 by psaeyang          #+#    #+#             */
/*   Updated: 2023/05/04 22:39:52 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

void    ft_putnbr(long long int nb, int base, int *len)
{
    char *hex = "0123456789abcdef";

    if (nb < 0)
    {
        nb *= -1;
        *len += write(1, "-", 1);
    }
    if (nb >= base)
        ft_putnbr((nb / base), base, len);
    *len = write(1, &hex[nb % base], 1);
}

void    ft_putstr(char *s, int *len)
{
    if (!s)
        s = "(null)";
    while(*s)
        *len += write(1, s++, 1);
}

int ft_printf(const char *format, ...)
{
    int len = 0;
    va_list args;

    va_start(args, format);
    while(*format)
    {
        if ((*format == '%') && (*(format + 1) == 's' || *(format + 1) == 'd' || *(format + 1) == 'x'))
        {
            format++;
            if (*format == 's')
                ft_putstr(va_arg(args, char *), &len);
            else if (*format == 'd')
                ft_putnbr((long long int)va_arg(args, int), 10, &len);
            else if (*format == 'x')
                ft_putnbr((long long int)va_arg(args, unsigned int), 16, &len);
        }
        else
            len += write(1, format, 1);
        format++;
            
    }
    va_end(args);
    return(len);
}

int main()
{
    // printf("str printf : %s\n", "hi");
    // ft_printf("str ft_printf : %s\n", "hi");
    // printf("digit printf : %d\n", 29);
    // ft_printf("digit ft_printf : %d\n", 29);
    printf("hex printf : %x\n", 10);
    ft_printf("hex ft_printf : %x\n", 10);
}