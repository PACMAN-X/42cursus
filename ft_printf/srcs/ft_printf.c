/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 17:25:13 by taeskim           #+#    #+#             */
/*   Updated: 2021/06/02 13:25:54 by taeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

s_format		*ft_initialize_s_format(s_format *sf)
{
	sf->zero = 0;
	sf->width = 0;
	sf->space = 0;
	sf->minus = 0;
	sf->plus = 0;
	sf->precision = 0;
	sf->star = 0;
	sf->str = NULL;
	return (sf);
}

int				ft_printf(const char *format, ...)
{
	s_format	*sf;
	int			i;

	i = 0;
	sf = (s_format *)malloc(sizeof(s_format));
	if (!sf)
		return (-1);
	ft_initialize_s_format(sf);
	va_start(sf->ap, format);
	while (format[i])
	{
		if (format[i] == '%')
			i = ft_foramt_handler(sf, format, i + 1);
		ft_putchar(&format[i]);
		i++;
	}
	va_end(sf->ap);
	free(sf);
	return (i);
}
