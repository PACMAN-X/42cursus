/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foramt_handler.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 17:11:52 by taeskim           #+#    #+#             */
/*   Updated: 2021/06/01 22:45:09 by taeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_foramt_handler(s_format *sf, const char *format, int index)
{
	while (!(ft_isalpha(format[index])))
	{
		if (format[index] == ' ')
			index = ft_space(sf, format, index);
		if (format[index] == '+')
			index = ft_plus(sf, format, index);
		if (format[index] == '-')
			index = ft_minus(sf, format, index);
		if (ft_isdigit(format[index]))
			index = ft_format_width(sf, format, index);
	}
	index = ft_format_specifier(sf, format, index);
	return (index);
}
