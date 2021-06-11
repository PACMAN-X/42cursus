/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frame_setter.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 16:46:36 by pac-man           #+#    #+#             */
/*   Updated: 2021/06/11 16:06:40 by taeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_frame_s_conditions(t_format *sf)
{
	if (!(sf->str))
		sf->str = "(null)";
	if (!(*sf->str))
		sf->precision = 0;
	if (!(sf->precision))
		sf->str = 0;
}

void		ft_frame_minus_argu_conditions(t_format *sf)
{
	if (sf->str && sf->specifier != 's')
		if (sf->str[0] == '-')
		{
			sf->sign = '-';
			sf->str++;
		}
}

void		ft_frame_mixed_conditions(t_format *sf, int l)
{
	if (sf->specifier == 's' && sf->width < sf->precision)
		sf->frame_size = sf->width;
	else
	{
		ft_frame_minus_argu_conditions(sf);
		l = ft_strlen(sf->str);
		sf->str_l = l;
		if (sf->specifier == 'd' || sf->specifier == 'i' || sf->specifier == 'u'
		|| sf->specifier == 'x' || sf->specifier == 'X')
		{
			if (*sf->str == '0' && (sf->precision == 0))
			{
				*sf->str = 0;
				l = 0;
			}
			if (sf->precision > l && sf->precision > 0)
				l = sf->precision;
		}
		if (sf->specifier == 's' && sf->precision < l && sf->precision > 0)
			l = sf->precision;
		sf->frame_size = l;
	}
}

void		ft_frame_width_precision_conditions(t_format *sf, int l)
{
	int frame_size;

	frame_size = 0;
	if (sf->specifier == '%' || (sf->width < sf->precision
	&& sf->specifier == 's'))
		sf->frame_size = sf->width;
	else
	{
		if (sf->precision < 0)
			sf->precision = 0;
		if (sf->width || sf->precision)
		{
			if ((sf->width >= l) && (sf->width >= sf->precision))
				frame_size = sf->width;
			else if ((sf->width >= l) && (sf->width <= sf->precision))
				frame_size = sf->precision;
			else if ((sf->width <= l) && (sf->width <= sf->precision) &&
			(sf->precision >= l))
				frame_size = sf->precision;
		}
		sf->frame_size = frame_size;
	}
}

void		ft_frame_setter(t_format *sf)
{
	sf->sign = sf->space ? ' ' : 0;
	sf->sign = sf->plus ? '+' : sf->sign;
	if (!(sf->specifier) || sf->specifier == 'c')
		sf->frame_size = sf->specifier == 'c' ? 1 : 0;
	else if (sf->specifier == '%')
		sf->frame_size = sf->width;
	else
	{
		if (sf->specifier == 'u')
			sf->str = ft_uitoa(va_arg(sf->ap, int));
		if (sf->specifier == 'd' || sf->specifier == 'i')
			sf->str = ft_itoa(va_arg(sf->ap, int));
		if (sf->specifier == 's')
		{
			sf->str = va_arg(sf->ap, char *);
			ft_frame_s_conditions(sf);
			if (sf->width < sf->precision)
			{
				sf->str_l = ft_strlen(sf->str);
				sf->frame_size = sf->width;
			}
		}
		ft_frame_mixed_conditions(sf, sf->frame_size);
	}
	ft_frame_width_precision_conditions(sf, sf->frame_size);
}
