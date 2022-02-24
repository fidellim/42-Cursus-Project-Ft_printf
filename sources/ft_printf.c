/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flim <flim@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 00:22:34 by flim              #+#    #+#             */
/*   Updated: 2022/02/25 01:33:44 by flim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void    print_conversion(va_list args, const char c)
{
    if (c == 'c')
    {
        char t;
        t = va_arg(args, int);
        write(1, &t, 1);
    }
}

int ft_printf(const char *s, ...)
{
    va_list args;
    
    va_start(args, s);
    while (*s)
    {
        if (*s == '%')
            print_conversion(args, *++s);
        else
            write(1, s, 1);
        s++;
    }
    va_end(args);
    return (1);
} 