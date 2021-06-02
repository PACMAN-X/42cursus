/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_completer.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 15:42:22 by taeskim           #+#    #+#             */
/*   Updated: 2021/06/02 16:05:53 by taeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void		ft_format_completer(s_format *sf)
{
	char	*c;
	char	*frame;
	int		len;
	char	pad;
	int		direction;
	
	c = ft_itoa(va_arg(sf->ap, int));
	len = ft_strlen(c);
	direction = 1;
	
	if (sf->width > len)
	{
		// 만약 width가 더 크다면 zero가 어떻게 되어 있는지 확인 필요
		frame = (char *)malloc(sf->width);
		pad = sf->zero ? '0' : ' ';
		direction = sf->minus ? -1 : 1;
		

		while (/* condition */)
		{
			/* code */
		}
		

	}
	

	// c = ft_strdup("");
	

	// if (!(sf->plus) && sf->space)
	// {
	// 	tmp = ' ';
	// 	ft_putchar(&tmp);
	// 	sf->width--;
	// }
	// if (sf->plus && sf->space)
	// {
	// 	tmp = '+';
	// 	ft_putchar(&tmp);
	// 	sf->width--;
	// }
	// while (sf->width > len)
	// {
	// 	tmp = sf->zero == 1 ? '0' : ' ';
	// 	ft_putchar(&tmp);
	// 	sf->width--;
	// }
	// while (*c)
	// {
	// 	ft_putchar(c);
	// 	c++;
	// }
}
