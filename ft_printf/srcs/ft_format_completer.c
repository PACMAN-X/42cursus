/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_completer.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pac-man <pac-man@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 15:42:22 by taeskim           #+#    #+#             */
/*   Updated: 2021/06/04 17:30:57 by pac-man          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void		ft_format_completer(s_format *sf)
{
	char *c;
	char tmp;
	int len;
	int frame_size;

	frame_size = ft_frame_setter(sf);

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

	// 먼저 1차저으로 해야 할 것은 va를 부호와 함께 정리하는 것.
	// precision이 va len보다 크다면 부호와 va 사이에 precision - len 만큼의 0이 들어간다.
	// precision이 있는 경우에는 padding인 0은 무시된다.
	// pad가 0이고 width가 va len보다 크다면 부호와 va 사이에 width - len 만큼의 0이 들어간다.

	// width 또는 precision가 있는 경우 frame의 크기는 이에 따라 결정이 되고, space 또는 +의 공간을 따로 확보한다.
	// -가 붙게 되면 왼쪽 정렬하게 됨.

	/*✅ 1.1
	va에 '-'가 포함되어 있다면
		sf->plus, sf->minus = 0;
		sf->str = ft_itoa(va_arg(sf->ap, int));
	else
		sign = sf->space ? ' ' : '+';
		*(sf->str) = ft_strjoin(sign, ft_itoa(va_arg(sf->ap, int)));

	frame에 영향을 미치는 요소
	width, len(str), precision

	mw = len(str);

	if width > mw && width > precision
		mw = width
	else if width > mw && width < precision
		mw = precision
	else if plus || space
		mw++;

	return (mw);

	precision이 str len보다 크다면 부호사이에 precision - len(str) 만큼의 0을 채워 넣는다.
	if (sf->precision > len(str))
		while ((sf->precision - len(str))--)
			ft_memmove
			ft_memset

	width가 str len보다 크고 sf->zero가 값을 가지고 있다면 사이에 0을 너힉
	if ((sf->width > len(str)) && sf->zero)
		ft_memmove
		ft_memset -> '0'

	*/
}
