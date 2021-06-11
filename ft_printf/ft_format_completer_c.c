/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_completer_c.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 10:34:07 by pac-man           #+#    #+#             */
/*   Updated: 2021/06/11 16:04:02 by taeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_format_completer_c(t_format *sf)
{
	char	c;

	c = va_arg(sf->ap, int);
	ft_frame_setter(sf);
	if (sf->minus)
	{
		sf->tl += ft_putchar(&c);
		ft_pad_setter(sf, sf->frame_size);
	}
	else
	{
		ft_pad_setter(sf, sf->frame_size);
		sf->tl += ft_putchar(&c);
	}
}
