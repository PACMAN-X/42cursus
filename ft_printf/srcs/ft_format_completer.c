/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_completer.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pac-man <pac-man@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 15:42:22 by taeskim           #+#    #+#             */
/*   Updated: 2021/06/04 14:26:21 by pac-man          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void		ft_format_completer(s_format *sf)
{
	char *c;
	char tmp;
	int len;

	c = ft_itoa(va_arg(sf->ap, int));
	len = ft_strlen(c);

	if (!(sf->plus) && sf->space)
	{
		tmp = ' ';
		ft_putchar(&tmp);
		sf->width--;
	}
	if (sf->plus && sf->space)
	{
		tmp = '+';
		ft_putchar(&tmp);
		sf->width--;
	}
	while (sf->width > len)
	{
		tmp = sf->zero == 1 ? '0' : ' ';
		ft_putchar(&tmp);
		sf->width--;
	}
	while (*c)
	{
		ft_putchar(c);
		c++;
	}
}
