/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pad_setter.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 13:11:30 by pac-man           #+#    #+#             */
/*   Updated: 2021/06/11 16:06:39 by taeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_pad_setter_diux(t_format *sf, int frame_size, char pad)
{
	int		offset;

	offset = sf->sign ? 1 : 0;
	while (frame_size-- - ft_strlen(sf->str) - offset > 0)
		sf->tl += ft_putchar(&pad);
}

void		ft_pad_setter_s(t_format *sf, int frame_size, char pad)
{
	if (sf->is_precision)
	{
		if ((sf->str_l > sf->precision) && (sf->precision > 0))
			while (frame_size-- - sf->precision > 0)
				sf->tl += ft_putchar(&pad);
		else
			while (frame_size-- - sf->str_l > 0)
				sf->tl += ft_putchar(&pad);
	}
	else
	{
		if (sf->str_l < sf->width)
			while (frame_size-- - sf->str_l > 0)
				sf->tl += ft_putchar(&pad);
	}
}

void		ft_pad_setter(t_format *sf, int frame_size)
{
	char	pad;

	pad = sf->zero ? '0' : ' ';
	pad = sf->precision ? ' ' : pad;
	if (sf->specifier == 'd' || sf->specifier == 'i' || sf->specifier == 'u'
	|| sf->specifier == 'x' || sf->specifier == 'X')
		ft_pad_setter_diux(sf, frame_size, pad);
	else if (sf->specifier == 's')
		ft_pad_setter_s(sf, frame_size, pad);
	else if (sf->specifier == '%')
		while (--frame_size > 0)
			sf->tl += ft_putchar(&pad);
	else if (sf->specifier == 'c')
		while (--frame_size > 0)
			sf->tl += ft_putchar(&pad);
	else if (sf->specifier == 'p')
		while (frame_size-- - ft_strlen(sf->str) > 0)
			sf->tl += ft_putchar(&pad);
}
