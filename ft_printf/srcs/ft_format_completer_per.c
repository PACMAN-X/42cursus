/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_completer_per.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 14:38:05 by pac-man           #+#    #+#             */
/*   Updated: 2021/06/11 00:03:52 by taeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void		ft_format_completer_per(t_format *sf)
{
	char	c;

	c = '%';
	sf->precision = 0;
	sf->plus = 0;
	if (sf->minus)
	{
		sf->zero = 0;
		sf->tl += ft_putchar(&c);
		if (sf->width > 1)
			ft_pad_setter(sf, sf->width);
	}
	else
	{
		if (sf->is_zero && !(sf->zero))
			sf->zero = 1;
		if (sf->width > 1)
			ft_pad_setter(sf, sf->width);
		sf->tl += ft_putchar(&c);
	}
}
