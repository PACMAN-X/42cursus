/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_handler_flag.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 17:20:20 by taeskim           #+#    #+#             */
/*   Updated: 2021/05/31 18:10:59 by taeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int ft_space(s_format *s_format, const char *format, int index)
{
	while (format[index] == ' ')
		index++;
		
	s_format->space = 1;
	return (index);
}