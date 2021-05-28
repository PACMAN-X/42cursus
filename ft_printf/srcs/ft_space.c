/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_space.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 17:20:20 by taeskim           #+#    #+#             */
/*   Updated: 2021/05/28 17:34:17 by taeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

size_t ft_space(s_format *s_format, const char *format, size_t index)
{
	while (format[index] == ' ')
	{
		format++;
		index++;
	}
	s_format->sp = 1;
	
	return (index);
}