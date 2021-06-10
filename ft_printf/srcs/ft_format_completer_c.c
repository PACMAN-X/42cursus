/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_completer_c.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pac-man <pac-man@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 10:34:07 by pac-man           #+#    #+#             */
/*   Updated: 2021/06/10 13:28:22 by pac-man          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void ft_format_completer_c(s_format *sf)
{
	char c;
	c = va_arg(sf->ap, int);
	sf->frame_size = ft_frame_setter(sf);

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
