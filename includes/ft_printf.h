/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flim <flim@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 00:33:48 by flim              #+#    #+#             */
/*   Updated: 2022/02/27 00:21:57 by flim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "../libft/libft.h"

int	ft_printf(const char *s, ...);
int	print_char(va_list args);
int	print_str(va_list args);
int	print_int(va_list args);
int	print_uint(va_list args);
int	print_hex(va_list args, char c);
int	print_pointer(va_list args);

#endif
