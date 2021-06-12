/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_completer_s.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 15:23:16 by pac-man           #+#    #+#             */
/*   Updated: 2021/06/12 12:20:35 by taeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_s_out(t_format *sf, int i)
{
	if (sf->minus)
	{
		if ((sf->precision > 0) && (sf->precision < sf->str_l))
		{
			while (sf->precision - i++ > 0)
				sf->tl += ft_putchar(sf->str++);
		}
		else
			sf->tl += ft_putstr_fd(sf->str, 1);
		ft_pad_setter(sf, sf->frame_size);
	}
	else
	{
		ft_pad_setter(sf, sf->frame_size);
		if ((sf->is_precision) && (sf->precision < sf->str_l)
		&& sf->precision > 0)
		{
			while (sf->precision - i++ > 0)
				sf->tl += ft_putchar(sf->str++);
		}
		else
			sf->tl += ft_putstr_fd(sf->str, 1);
	}
}

void	ft_format_completer_s(t_format *sf)
{
	ft_frame_setter(sf);
	ft_s_out(sf, 0);
	free(sf->str);
	sf->str = 0;
}
