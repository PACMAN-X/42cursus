/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 17:25:13 by taeskim           #+#    #+#             */
/*   Updated: 2021/06/12 12:17:38 by taeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_format		*ft_reset_t_format(t_format *sf)
{
	sf->zero = 0;
	sf->width = 0;
	sf->space = 0;
	sf->minus = 0;
	sf->plus = 0;
	sf->precision = -1;
	sf->str = NULL;
	sf->str_l = 0;
	sf->sign = 0;
	sf->frame_size = 0;
	sf->is_precision = 0;
	sf->specifier = 0;
	sf->is_zero = 0;
	sf->frame = 0;
	sf->base = 0;
	return (sf);
}

t_format		*ft_initialize_t_format(t_format *sf)
{
	sf->zero = 0;
	sf->width = 0;
	sf->space = 0;
	sf->minus = 0;
	sf->plus = 0;
	sf->precision = -1;
	sf->str = 0;
	sf->str_l = 0;
	sf->sign = 0;
	sf->frame_size = 0;
	sf->is_precision = 0;
	sf->specifier = 0;
	sf->tl = 0;
	sf->is_zero = 0;
	sf->frame = 0;
	sf->base = 0;
	return (sf);
}

void 		ft_free(char *str)
{
	str = 0;
	free(str);
}

int				ft_printf(const char *format, ...)
{
	t_format	sf;
	int			i;

	i = -1;
	ft_initialize_t_format(&sf);
	va_start(sf.ap, format);
	while (format[++i])
	{
		if (format[i] == '%')
		{
			i = ft_format_handler(&sf, format, i + 1);
			ft_reset_t_format(&sf);
		}
		else
			sf.tl += ft_putchar(&format[i]);
	}
	va_end(sf.ap);
	return (sf.tl);
}
