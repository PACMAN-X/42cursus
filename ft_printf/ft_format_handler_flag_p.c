/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_handler_flag_p.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 23:35:47 by taeskim           #+#    #+#             */
/*   Updated: 2021/06/11 16:06:42 by taeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_space(t_format *sf, const char *format, int index)
{
	while (format[index] == ' ')
		index++;
	sf->space = 1;
	sf->zero = 0;
	return (index);
}

int		ft_plus(t_format *sf, const char *format, int index)
{
	while (format[index] == '+')
		index++;
	sf->plus = 1;
	sf->space = 0;
	sf->zero = 0;
	return (index);
}
