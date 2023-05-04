/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   230505-1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 00:53:06 by psaeyang          #+#    #+#             */
/*   Updated: 2023/05/05 01:45:16 by psaeyang         ###   ########.fr       */
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
        len += write(1, s++, 1);
}

void ft_putdigit(long long int nb, int base, int *len)
{
    char *hex = "0123456789abcdef";

    if (nb < 0)
    {
        nb *= -1;
        len += write(1, "-", 1);
    }
    if (nb >= base)
        ft_putdigit((nb / base), base, len);
    len += write(1, &hex[nb % base], 1);
}

int ft_printf(const char *format, ...)
{
    int len = 0;

    va_list args;
    va_start(args, format);

    while (*format)
    {
        if (*format == '%' && (*(format + 1) == 's' || *(format + 1) == 'd' || *(format + 1) == 'x'))
        {
            format++;
            if (*format == 's')
                ft_putstr(va_arg(args, char *), &len);
            else if (*format == 'd')
                ft_putdigit((long long int)va_arg(args, int), 10, &len);
            else if (*format == 'x')
                ft_putdigit((long long int)va_arg(args, unsigned int), 16, &len);
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

    // ft_printf("%s\n", p);
    // printf("%s\n", p);
    // ft_printf("%s\n", "hello");
    // printf("%s\n", "hello");
    // printf("%d\n", 343);
    // ft_printf("%d\n", 343);
    printf("%x\n", 11);
    ft_printf("%x\n", 11);
}