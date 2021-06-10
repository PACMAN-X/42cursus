/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frame_setter.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 16:46:36 by pac-man           #+#    #+#             */
/*   Updated: 2021/06/10 18:09:23 by taeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int ft_frame_setter(s_format *sf)
{
	int l;

	sf->sign = sf->space ? ' ' : 0;
	sf->sign = sf->plus ? '+' : sf->sign;

	if (!(sf->specifier))
		l = 0;
	else if (sf->specifier == 'c')
		l = 1;
	else if (sf->specifier == '%')
		return (sf->width);
	else
	{
		if (sf->specifier == 'u')
			sf->str = ft_uitoa(va_arg(sf->ap, int));
		if (sf->specifier == 'd' || sf->specifier == 'i')
			sf->str = ft_itoa(va_arg(sf->ap, int));
		if (sf->specifier == 's')
		{
			sf->str = va_arg(sf->ap, char *);

			if (!(sf->str))
				sf->str = "(null)";
			if (!(*sf->str))
				sf->precision = 0;
			if (!(sf->precision))
				sf->str = 0;
			if (sf->width < sf->precision)
			{
				sf->str_l = ft_strlen(sf->str);
				return (sf->width);
			}
		}
		if (sf->str && sf->specifier != 's')
			if (sf->str[0] == '-')
			{
				sf->sign = '-';
				sf->str++;
			}
		l = ft_strlen(sf->str);
		sf->str_l = l;
		if ((sf->specifier == 'd' || sf->specifier == 'i' || sf->specifier == 'u' || sf->specifier == 'x' || sf->specifier == 'X') && sf->precision > l && sf->precision > 0)
			l = sf->precision;
		if (sf->specifier == 's' && sf->precision < l && sf->precision > 0)
			l = sf->precision;

		if (sf->specifier == 'd' || sf->specifier == 'i' || sf->specifier == 'u' || sf->specifier == 'x' || sf->specifier == 'X')
		{
			if (*sf->str == '0' && (sf->precision == 0))
			{
				*sf->str = 0;
				l = 0;
			}
		}
	}

	if (sf->precision < 0)
		sf->precision = 0;

	if (sf->width || sf->precision)
	{
		if ((sf->width >= l) && (sf->width >= sf->precision))
			l = sf->width;
		else if ((sf->width >= l) && (sf->width <= sf->precision))
			l = sf->precision;
		else if ((sf->width <= l) && (sf->width <= sf->precision) && (sf->precision >= l))
			l = sf->precision;
	}
	return (l);
}
