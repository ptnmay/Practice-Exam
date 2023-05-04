/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   230505-2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 01:45:49 by psaeyang          #+#    #+#             */
/*   Updated: 2023/05/05 02:09:04 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

void ft_putstr(char *s, int *len)
{
    if (!s)
        s = "(null)";
    while(*s)
        *len += write(1, s++, 1);
}

void ft_digit(long long int nb, int base, int *len)
{
    char *hex = "0123456789abcdef";

    if (nb < 0)
    {
        nb *= -1;
        *len += write(1, "-", 1);
    }
    if (nb >= base)
        ft_digit((nb / base), base, len);
    *len += write(1, &hex[nb % base], 1);
}

int ft_printf(const char *format, ...)
{
    int len = 0;
    va_list args;
    va_start(args, format);

    while(*format)
    {
        if (*format == '%' && (*(format + 1) == 's' || *(format + 1) == 'd' || *(format + 1) == 'x'))
        {
            format++;
            if (*format == 's')
                ft_putstr(va_arg(args, char *), &len);
            else if (*format == 'd')
                ft_digit((long long int)va_arg(args, int), 10, &len);
            else if (*format == 'x')
                ft_digit((long long int)va_arg(args, unsigned int), 16, &len);
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
    char *p = NULL;

    // printf("%s\n", p);
    // ft_printf("%s\n", p);
    printf("%x\n", 11);
    ft_printf("%x\n", 11);
    // printf("%d\n", 11);
    // ft_printf("%d\n", 11);
    // printf("%s\n", "hello");
    // ft_printf("%s\n", "hello");
}