/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_handler_flag.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 17:20:20 by taeskim           #+#    #+#             */
/*   Updated: 2021/06/11 16:06:41 by taeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_zero(t_format *sf, const char *format, int index)
{
	while (format[index] == '0')
		index++;
	sf->is_zero = 1;
	sf->zero = 1;
	return (index);
}

int		ft_star(t_format *sf, const char *format, int index)
{
	while (format[index] == '*')
		index++;
	if (sf->is_precision)
	{
		sf->precision = va_arg(sf->ap, int);
		if (sf->precision < 0)
			sf->precision = -1;
		else
			sf->zero = 0;
	}
	else
	{
		sf->width = va_arg(sf->ap, int);
		if (sf->width < 0)
		{
			sf->width = -sf->width;
			sf->minus = 1;
			sf->zero = 0;
		}
	}
	return (index);
}

int		ft_minus(t_format *sf, const char *format, int index)
{
	while (format[index] == '-')
		index++;
	sf->minus = 1;
	sf->zero = 0;
	return (index);
}

int		ft_precision(t_format *sf, const char *format, int index)
{
	int num;

	num = 0;
	sf->is_precision = 1;
	if (ft_istype(format[index + 1]))
		sf->zero = 0;
	while (ft_isdigit(format[++index]))
		num = (num * 10) + (format[index] - '0');
	sf->precision = num;
	if (sf->precision)
		sf->zero = 0;
	if (num == 0 && format[index] != '*')
		sf->zero = 0;
	return (index);
}
