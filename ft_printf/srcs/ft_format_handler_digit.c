/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_handler_digit.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 20:06:38 by taeskim           #+#    #+#             */
/*   Updated: 2021/06/11 00:03:54 by taeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_format_width(t_format *sf, const char *format, int index)
{
	int	num;

	num = 0;
	while (ft_isdigit(format[index]))
	{
		num = (num * 10) + (format[index] - '0');
		index++;
	}
	sf->width = num;
	return (index);
}
