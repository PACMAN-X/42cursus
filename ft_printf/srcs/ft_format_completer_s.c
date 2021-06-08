/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_completer_s.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pac-man <pac-man@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 15:23:16 by pac-man           #+#    #+#             */
/*   Updated: 2021/06/08 12:37:40 by pac-man          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void ft_format_completer_s(s_format *sf)
{
	int i;

	i = 0;
	sf->frame_size = ft_frame_setter(sf);
	if (sf->minus)
	{
		if ((sf->is_precision) && (sf->precision < sf->str_l))
		{
			while (sf->precision - i++ > 0)
				ft_putchar(sf->str++);
		}
		else
			ft_putstr_fd(sf->str, 1);
		ft_pad_setter(sf, sf->frame_size);
	}
	else
	{
		ft_pad_setter(sf, sf->frame_size);
		if ((sf->is_precision) && (sf->precision < sf->str_l))
		{
			while (sf->precision - i++ > 0)
				ft_putchar(sf->str++);
		}
		else
			ft_putstr_fd(sf->str, 1);
	}
}
