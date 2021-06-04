/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_specifier.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pac-man <pac-man@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:57:22 by taeskim           #+#    #+#             */
/*   Updated: 2021/06/04 17:01:51 by pac-man          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int			ft_format_specifier(s_format *sf, const char *format, int index)
{
	// if (format[index] == 'c')
	// {
	// 	*c = (char)va_arg(sf->ap, int);
	// 	ft_putchar(c);
	// }
	// width와 length를 비교하여 width가 더 크다면 width의 길이로 공간 확보 및 '0' 또는 ' '으로
	// 먄약 -과 0이 함께 있다면 0은 무시됨.
	if (format[index] == 'd' || format[index] == 'i')
		ft_format_completer(sf);
	// if (format[index] == 's')
	// {
	// 	c = va_arg(sf->ap, char *);
	// 	len = ft_strlen(c);
	// 	while (sf->width > len)
	// 	{
	// 		tmp = sf->zero == 1 ? '0' : ' ';
	// 		ft_putchar(&tmp);
	// 		sf->width--;
	// 	}
	// 	while (*c)
	// 	{
	// 		ft_putchar(c);
	// 		c++;
	// 	}
	// }
	index++;
	return (index);
}
