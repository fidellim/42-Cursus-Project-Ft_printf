/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flim <flim@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 16:38:28 by flim              #+#    #+#             */
/*   Updated: 2022/02/28 17:22:22 by flim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	n;

	if (!s || !f)
		return ;
	n = 0;
	while (s[n])
	{
		(f)(n, &s[n]);
		n++;
	}
}
