/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frame_setter.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pac-man <pac-man@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 16:46:36 by pac-man           #+#    #+#             */
/*   Updated: 2021/06/07 14:41:47 by pac-man          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int ft_frame_setter(s_format *sf)
{
	int l;
	int wd;
	int sp;

	wd = sf->width;
	sp = sf->precision;
	sf->sign = sf->space ? ' ' : 0;
	sf->sign = sf->plus ? '+' : sf->sign;

	sf->str = ft_itoa(va_arg(sf->ap, int));
	l = ft_strlen(sf->str);
	sf->str_l = l;

	if ((sp == 0) && (sp + '0' == *sf->str))
	{
		*sf->str = 0;
		l = 0;
	}

	if (sp == -1)
		sf->precision = 0;
	if (sf->str[0] == '-')
	{
		sf->sign = '-';
		sf->str++;
		sf->str_l -= 1;
	}
	if (wd || sp)
	{
		if ((wd >= l) && (wd >= sp))
			l = wd;
		else if ((wd >= l) && (wd <= sp))
			l = sp;
		else if ((wd <= l) && (wd <= sp) && (sp >= l))
			l = sp;
	}
	return (l);
}
