/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_specifier.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:57:22 by taeskim           #+#    #+#             */
/*   Updated: 2021/06/11 16:06:40 by taeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_format_specifier(t_format *sf, const char *format, int i)
{
	sf->specifier = format[i];
	if (format[i] == 'c')
		ft_format_completer_c(sf);
	if (format[i] == 'd' || format[i] == 'i' || format[i] == 'u')
		ft_format_completer_diu(sf);
	if (format[i] == 's')
		ft_format_completer_s(sf);
	if (format[i] == '%')
		ft_format_completer_per(sf);
	if (format[i] == 'p' || format[i] == 'x' || format[i] == 'X')
		ft_format_completer_px(sf);
	return (i);
}
