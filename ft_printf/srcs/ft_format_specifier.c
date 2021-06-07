/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_specifier.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pac-man <pac-man@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:57:22 by taeskim           #+#    #+#             */
/*   Updated: 2021/06/07 16:35:24 by pac-man          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int ft_format_specifier(s_format *sf, const char *format, int index)
{
	if (format[index] == 'c')
		ft_format_completer_c(sf);
	if (format[index] == 'd' || format[index] == 'i' || format[index] == 'u')
	{
		sf->specifier = format[index];
		ft_format_completer_diu(sf);
	}
	if (format[index] == 's')
		ft_format_completer_s(sf);

	// if (format[index] == 's')
	// 	ft_format_completer_s(sf);

	return (index);
}
