/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_completer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 17:11:52 by taeskim           #+#    #+#             */
/*   Updated: 2021/05/28 21:33:59 by taeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t ft_flag_completer(s_format *s_format, const char *format, size_t index)
{
	while (!(ft_isalph(format[index])))
	{
		if (format[index] == ' ')
			index = ft_space(s_format, format, index);
		if (format[index] == '0')
			index = ft_zero(s_format, format, index);
		if (format[index] == '*')
			index = ft_star(s_format, format, index);
		if (format[index] == '-')
			index = ft_dash(s_format, format, index);
		if (format[index] == '.')
			index = ft_precision(s_format, format, index);
		if (ft_isdigit(format[index]))
			index = ft_width(s_format, format, index);
	}
	return (index);
}
