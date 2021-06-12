/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_completer_diu.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 15:42:22 by taeskim           #+#    #+#             */
/*   Updated: 2021/06/12 12:20:55 by taeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format_setter_diu(t_format *sf)
{
	if (sf->precision > sf->str_l)
		sf->str = ft_strjoin(ft_calloc(sf->precision - sf->str_l, 1), sf->str);
}

void	ft_diu_out(t_format *sf)
{
	if (sf->minus)
	{
		if (sf->sign)
			sf->tl += ft_putchar(&sf->sign);
		sf->tl += ft_putstr_fd(sf->str, 1);
		ft_pad_setter(sf, sf->frame_size);
	}
	else
	{
		if (sf->zero)
		{
			if (sf->sign)
				sf->tl += ft_putchar(&sf->sign);
			ft_pad_setter(sf, sf->frame_size);
			sf->tl += ft_putstr_fd(sf->str, 1);
		}
		else
		{
			ft_pad_setter(sf, sf->frame_size);
			if (sf->sign)
				sf->tl += ft_putchar(&sf->sign);
			sf->tl += ft_putstr_fd(sf->str, 1);
		}
	}
}

void	ft_format_completer_diu(t_format *sf)
{
	ft_frame_setter(sf);
	ft_format_setter_diu(sf);
	ft_diu_out(sf);
	free(sf->str);
	sf->str = 0;
}
