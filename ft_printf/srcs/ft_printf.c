/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pac-man <pac-man@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 17:25:13 by taeskim           #+#    #+#             */
/*   Updated: 2021/06/10 13:50:51 by pac-man          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
s_format *ft_reset_s_format(s_format *sf)
{
	sf->zero = 0;
	sf->width = 0;
	sf->space = 0;
	sf->minus = 0;
	sf->plus = 0;
	sf->precision = -1;
	sf->str = NULL;
	sf->str_l = 0;
	sf->sign = 0;
	sf->frame_size = 0;
	sf->specifier_num = 0;
	sf->is_precision = 0;
	sf->specifier = 0;
	sf->is_zero = 0;
	return (sf);
}

s_format *ft_initialize_s_format(s_format *sf)
{
	sf->zero = 0;
	sf->width = 0;
	sf->space = 0;
	sf->minus = 0;
	sf->plus = 0;
	sf->precision = -1;
	sf->str = NULL;
	sf->str_l = 0;
	sf->sign = 0;
	sf->frame_size = 0;
	sf->specifier_num = 0;
	sf->is_precision = 0;
	sf->specifier = 0;
	sf->tl = 0;
	sf->is_zero = 0;
	return (sf);
}

int ft_printf(const char *format, ...)
{
	s_format *sf;
	int i;

	i = -1;
	sf = (s_format *)malloc(sizeof(s_format));
	if (!sf)
		return (-1);
	ft_initialize_s_format(sf);
	va_start(sf->ap, format);
	while (format[++i])
	{
		if (format[i] == '%')
		{
			i = ft_format_handler(sf, format, i + 1);
			sf->specifier_num++;
		}
		else
			sf->tl += ft_putchar(&format[i]);
		ft_reset_s_format(sf);
	}
	va_end(sf->ap);
	free(sf);
	return (sf->tl);
}
