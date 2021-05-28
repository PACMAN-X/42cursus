/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 17:25:13 by taeskim           #+#    #+#             */
/*   Updated: 2021/05/28 21:52:44 by taeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

s_format		*ft_initialize_s_format(s_format *sf)
{
	sf->wd = 0;
	sf->sp = 0;
	sf->ds = 0;
	sf->pr = 0;
	sf->st = 0;
	return (sf);
}

size_t			ft_printf(const char *format, ...)
{
	s_format	*sf;
	size_t		i;

	i = 0;
	sf = (s_format *)malloc(sizeof(s_format));
	if (!sf)
		return (-1);
	ft_initialize_s_format(sf);
	va_start(sf->ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			ft_flag_completer(sf, format, i + 1);
		}
		i++;
	}

	va_end(sf->ap);
	return (i);
}
