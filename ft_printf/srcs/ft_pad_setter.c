/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pad_setter.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pac-man <pac-man@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 13:11:30 by pac-man           #+#    #+#             */
/*   Updated: 2021/06/07 13:12:19 by pac-man          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void ft_pad_setter(s_format *sf, int frame_size)
{
	char pad;

	pad = sf->zero ? '0' : ' ';
	pad = sf->precision ? ' ' : pad;
	while (frame_size-- - ft_strlen(sf->str) - ft_strlen(&sf->sign) > 0)
		ft_putchar(&pad);
}
