/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_specifier.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:57:22 by taeskim           #+#    #+#             */
/*   Updated: 2021/06/01 22:47:23 by taeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_format_specifier(s_format *sf, const char *format, int index)
{
	char *c;

	if (format[index] == 'd')
	{
		c = ft_itoa(va_arg(sf->ap, int));
		while (*c)
		{
			ft_putchar(c);
			c++;
		}
	}
	index++;
	return (index);
}
