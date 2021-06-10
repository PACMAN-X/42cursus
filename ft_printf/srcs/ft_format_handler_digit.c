/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_handler_digit.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pac-man <pac-man@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 20:06:38 by taeskim           #+#    #+#             */
/*   Updated: 2021/06/10 00:57:23 by pac-man          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int ft_format_width(s_format *sf, const char *format, int index)
{
	int num;

	num = 0;
	while (ft_isdigit(format[index]))
	{
		num = (num * 10) + (format[index] - '0');
		index++;
	}
	sf->width = num;
	return (index);
}
