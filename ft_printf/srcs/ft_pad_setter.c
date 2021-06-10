/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pad_setter.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pac-man <pac-man@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 13:11:30 by pac-man           #+#    #+#             */
/*   Updated: 2021/06/10 13:26:46 by pac-man          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void ft_pad_setter(s_format *sf, int frame_size)
{
	char pad;

	pad = sf->zero ? '0' : ' ';
	pad = sf->precision ? ' ' : pad;

	if (sf->specifier == 'd' || sf->specifier == 'i' || sf->specifier == 'u' || sf->specifier == 'x' || sf->specifier == 'X')
	{
		while (frame_size-- - ft_strlen(sf->str) - ft_strlen(&sf->sign) > 0)
			sf->tl += ft_putchar(&pad);
	}

	if (sf->specifier == 's')
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
	if (sf->specifier == '%')
	{
		while (--frame_size > 0)
			sf->tl += ft_putchar(&pad);
	}

	if (sf->specifier == 'c')
		while (--frame_size > 0)
			sf->tl += ft_putchar(&pad);

	if (sf->specifier == 'p')
		while (frame_size-- - ft_strlen(sf->str) > 0)
			sf->tl += ft_putchar(&pad);
}
