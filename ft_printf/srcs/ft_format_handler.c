/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_handler.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pac-man <pac-man@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 17:11:52 by taeskim           #+#    #+#             */
/*   Updated: 2021/06/10 13:03:35 by pac-man          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int ft_istype(const char c)
{
	if (c == 'd' || c == 'i' || c == 'u' || c == 'c' || c == 's' || c == 'x' || c == 'X' || c == 'p')
		return (1);
	return (0);
}

int ft_format_handler(s_format *sf, const char *format, int index)
{
	while (!(ft_istype(format[index])) && (format[index] != '%'))
	{
		if (format[index] == ' ')
			index = ft_space(sf, format, index);
		if (format[index] == '+')
			index = ft_plus(sf, format, index);
		if (format[index] == '-')
			index = ft_minus(sf, format, index);
		if (format[index] == '*')
			index = ft_star(sf, format, index);
		if (format[index] == '.')
			index = ft_precision(sf, format, index);
		if (ft_isdigit(format[index]))
		{
			if (format[index] == '0' && !(sf->minus) && !(sf->width) && sf->precision == -1)
			{
				sf->zero = 1;
				sf->is_zero = 1;
			}
			index = ft_format_width(sf, format, index);
		}
	}
	index = ft_format_specifier(sf, format, index);
	return (index);
}
