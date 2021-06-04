/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frame_setter.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pac-man <pac-man@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 16:46:36 by pac-man           #+#    #+#             */
/*   Updated: 2021/06/04 17:30:23 by pac-man          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int ft_frame_setter(s_format *sf)
{
	int l;

	l = ft_strlen(ft_itoa(va_arg(sf->ap, int)));
	sf->str = ft_itoa(va_arg(sf->ap, int));

	if ((sf->width > l) && (sf->width >= sf->precision))
		l = sf->width;
	else if ((sf->width > l) && (sf->width <= sf->precision))
		l = sf->precision;
	if (sf->precision && (sf->plus || sf->space))
		l++;

	return (l);
}
