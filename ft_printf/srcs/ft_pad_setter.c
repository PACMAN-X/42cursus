/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pad_setter.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pac-man <pac-man@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 13:11:30 by pac-man           #+#    #+#             */
/*   Updated: 2021/06/08 12:14:46 by pac-man          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void ft_pad_setter(s_format *sf, int frame_size)
{
	char pad;

	pad = sf->zero ? '0' : ' ';
	pad = sf->precision ? ' ' : pad;
	if (sf->specifier == 'd' || sf->specifier == 'i' || sf->specifier == 'u')
	{
		while (frame_size-- - ft_strlen(sf->str) - ft_strlen(&sf->sign) > 0)
			ft_putchar(&pad);
	}

	if (sf->specifier == 's')
	{
		if (sf->is_precision)
		{
			if (sf->str_l <= sf->precision && (sf->str_l < sf->width))
				while (frame_size-- - sf->str_l > 0)
					ft_putchar(&pad);

			if ((sf->str_l > sf->precision) && (sf->precision < sf->width))
				while (frame_size-- - sf->precision > 0)
					ft_putchar(&pad);
		}
		else
		{
			if (sf->str_l < sf->width)
				while (frame_size-- - sf->str_l > 0)
					ft_putchar(&pad);
		}
	}

	if (sf->specifier == 'c')
	{
		while (--frame_size > 0)
		{
			ft_putchar(&pad);
		}
	}
}
