/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_handler_flag.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pac-man <pac-man@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 17:20:20 by taeskim           #+#    #+#             */
/*   Updated: 2021/06/08 13:57:03 by pac-man          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int ft_zero(s_format *sf, const char *format, int index)
{
	while (format[index] == '0')
		index++;

	sf->zero = 1;
	return (index);
}

int ft_space(s_format *sf, const char *format, int index)
{
	while (format[index] == ' ')
		index++;

	sf->space = 1;
	return (index);
}

int ft_plus(s_format *sf, const char *format, int index)
{
	while (format[index] == '+')
		index++;

	sf->plus = 1;
	sf->space = 0;
	return (index);
}

int ft_star(s_format *sf, const char *format, int index)
{
	while (format[index] == '*')
		index++;
	if (sf->is_precision)
		sf->precision = va_arg(sf->ap, int);
	else
		sf->width = va_arg(sf->ap, int);
	return (index);
}

int ft_minus(s_format *sf, const char *format, int index)
{
	while (format[index] == '-')
		index++;

	sf->minus = 1;
	sf->zero = 0;
	return (index);
}

int ft_precision(s_format *sf, const char *format, int index)
{
	int num;

	num = 0;
	sf->is_precision = 1;
	sf->zero = 0;
	if (format[index] > 0)
	{
		while (ft_isdigit(format[index]))
		{
			num = (num * 10) + (format[index] - '0');
			index++;
		}
		sf->precision = num;
	}

	return (index);
}
