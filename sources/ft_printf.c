/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flim <flim@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 00:22:34 by flim              #+#    #+#             */
/*   Updated: 2022/02/26 00:52:19 by flim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int    print_conversion(va_list args, const char c)
{
    int str_count;

    str_count = 1;
    if (c == 'c')
        str_count = print_char(args);
    else if (c == 's')
        str_count = print_str(args);
    else if (c == 'p')
    else if (c == 'd')
    else if (c == 'i')
    else if (c == 'u')
    else if (c == 'x')
    else if (c == 'X')
    else if (c == '%')
        ft_putchar_fd('%', 1);
    return (str_count);
}

int ft_printf(const char *s, ...)
{
    va_list args;
    int str_count;
    
    str_count = 0;
    va_start(args, s);
    while (*s)
    {
        if (*s == '%')
            str_count += print_conversion(args, *++s);
        else
        {
            ft_putchar_fd(*s, 1);
            str_count++;
        }
        s++;
    }
    va_end(args);
    return (str_count);
} 