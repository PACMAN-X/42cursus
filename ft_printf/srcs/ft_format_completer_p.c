/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_completer_p.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pac-man <pac-man@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 16:49:10 by pac-man           #+#    #+#             */
/*   Updated: 2021/06/10 15:01:05 by pac-man          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void ft_format_completer_p(s_format *sf)
{
	char addr[OPEN_MAX];
	unsigned long tmp;
	unsigned long j;
	int frame;

	j = (unsigned long)va_arg(sf->ap, void *);
	tmp = j;
	frame = 1;

	sf->str = ft_strdup("0x");

	while (tmp / 16 != 0)
	{
		tmp = tmp / 16;
		frame++;
	}
	if (j)
	{
		ft_base_getter(frame, 0, addr, j, "0123456789abcdef");
		addr[frame] = 0;
		sf->str = ft_strjoin(sf->str, addr);
	}
	else if (sf->precision != 0)
		sf->str = ft_strdup("0x0");

	sf->frame_size = ft_frame_setter(sf);

	if (sf->minus)
	{
		sf->tl += ft_putstr_fd(sf->str, 1);
		ft_pad_setter(sf, sf->frame_size);
	}
	else
	{
		if (sf->zero)
		{
			sf->tl += ft_putstr_fd(sf->str, 1);
			ft_pad_setter(sf, sf->frame_size);
		}
		else
		{
			ft_pad_setter(sf, sf->frame_size);
			sf->tl += ft_putstr_fd(sf->str, 1);
		}
	}
}
