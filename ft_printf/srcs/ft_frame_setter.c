/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frame_setter.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pac-man <pac-man@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 16:46:36 by pac-man           #+#    #+#             */
/*   Updated: 2021/06/07 16:47:34 by pac-man          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int ft_frame_setter(s_format *sf)
{
	int l;

	sf->sign = sf->space ? ' ' : 0;
	sf->sign = sf->plus ? '+' : sf->sign;

	if (sf->specifier == 'c')
		l = 1;
	else
	{
		if (sf->specifier == 'u')
			sf->str = ft_uitoa(va_arg(sf->ap, int));
		else
			sf->str = ft_itoa(va_arg(sf->ap, int));
		l = ft_strlen(sf->str);
		sf->str_l = l;

		if ((sf->precision == 0) && (sf->precision + '0' == *sf->str))
		{
			*sf->str = 0;
			l = 0;
		}
		if (sf->precision == -1)
			sf->precision = 0;
		if (sf->str[0] == '-')
		{
			sf->sign = '-';
			sf->str++;
			sf->str_l -= 1;
		}
	}

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
