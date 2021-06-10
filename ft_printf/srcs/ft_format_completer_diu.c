/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_completer_diu.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pac-man <pac-man@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 15:42:22 by taeskim           #+#    #+#             */
/*   Updated: 2021/06/10 13:46:21 by pac-man          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void ft_format_completer_diu(s_format *sf)
{
	sf->frame_size = ft_frame_setter(sf);

	if (sf->precision > sf->str_l)
		sf->str = ft_strjoin(ft_calloc(sf->precision - sf->str_l, 1), sf->str);
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
