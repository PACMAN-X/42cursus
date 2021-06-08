/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_completer_xX.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pac-man <pac-man@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 01:47:31 by pac-man           #+#    #+#             */
/*   Updated: 2021/06/09 03:20:28 by pac-man          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void ft_format_completer_xX(s_format *sf)
{
	char addr[OPEN_MAX];
	unsigned long j;
	unsigned long tmp;
	int frame;

	j = va_arg(sf->ap, unsigned int);
	tmp = j;
	frame = 1;

	while (tmp / 16 != 0)
	{
		tmp = tmp / 16;
		frame++;
	}
	if (sf->specifier == 'x')
	{
		ft_base_getter(frame, 0, addr, j, "0123456789abcdef");
		addr[frame] = 0;
		sf->str = addr;
	}
	else
	{
		ft_base_getter(frame, 0, addr, j, "0123456789ABCDEF");
		addr[frame] = 0;
		sf->str = addr;
	}

	sf->frame_size = ft_frame_setter(sf);

	if (sf->precision > sf->str_l)
		sf->str = ft_strjoin(ft_calloc(sf->precision - sf->str_l, 1), sf->str);

	if (sf->minus)
	{
		ft_putstr_fd(sf->str, 1);
		ft_pad_setter(sf, sf->frame_size);
	}
	else
	{
		ft_pad_setter(sf, sf->frame_size);
		ft_putstr_fd(sf->str, 1);
	}
}
