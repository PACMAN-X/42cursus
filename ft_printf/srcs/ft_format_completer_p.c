/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_completer_p.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pac-man <pac-man@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 16:49:10 by pac-man           #+#    #+#             */
/*   Updated: 2021/06/09 02:35:06 by pac-man          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void ft_format_completer_p(s_format *sf)
{
	char addr[OPEN_MAX];
	unsigned long j;

	j = (unsigned long)va_arg(sf->ap, void *);
	addr[0] = '0';
	addr[1] = 'x';
	addr[11] = 0;
	if (j)
	{
		ft_base_getter(13, 2, addr, j, "0123456789abcdef");
		sf->str = addr;
	}
	else
		sf->str = "0x0";

	sf->frame_size = ft_frame_setter(sf);

	if (sf->minus)
	{
		ft_putstr_fd(sf->str, 1);
		ft_pad_setter(sf, sf->frame_size);
	}
	else
	{
		if (sf->zero)
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
}
