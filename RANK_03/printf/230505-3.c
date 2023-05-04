/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   230505-3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 02:09:19 by psaeyang          #+#    #+#             */
/*   Updated: 2023/05/05 02:10:11 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

int ft_printf(const char *format, ...)
{
    int len = 0;
    va_list args;
    va_start(args, format);

    while(*format)
    {
        if ()
    }
}