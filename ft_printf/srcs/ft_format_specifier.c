/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_specifier.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pac-man <pac-man@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:57:22 by taeskim           #+#    #+#             */
/*   Updated: 2021/06/07 13:19:53 by pac-man          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int ft_format_specifier(s_format *sf, const char *format, int index)
{
	/*✅ 1.2 타입*/
	if (format[index] == 'd' || format[index] == 'i')
		ft_format_completer_di(sf);
	// if (format[index] == 'u')
	// 	ft_format_completer_u(sf);
	if (format[index] == 'c')
		ft_format_completer_c(sf);

	return (index);
}
