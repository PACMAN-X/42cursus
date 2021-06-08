/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_completer_per.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pac-man <pac-man@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 14:38:05 by pac-man           #+#    #+#             */
/*   Updated: 2021/06/08 15:48:53 by pac-man          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void ft_format_completer_per(s_format *sf)
{
	char c;

	c = '%';
	sf->frame_size = ft_frame_setter(sf);

	if (sf->minus)
	{
		ft_putchar(&c);
		ft_pad_setter(sf, sf->frame_size);
	}
	else
	{
		ft_pad_setter(sf, sf->frame_size);
		ft_putchar(&c);
	}
}
