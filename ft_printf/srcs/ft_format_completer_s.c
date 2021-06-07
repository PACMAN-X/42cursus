/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_completer_s.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pac-man <pac-man@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 15:23:16 by pac-man           #+#    #+#             */
/*   Updated: 2021/06/07 17:21:13 by pac-man          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void ft_format_completer_s(s_format *sf)
{
	sf->str = va_arg(sf->ap, char *);
	sf->frame_size = ft_frame_setter(sf);

	if (sf->minus)
	{
		ft_putstr_fd(sf->str, 1);
		ft_pad_setter(sf, sf->frame_size);
	}
	else
	{
		ft_pad_setter(sf, sf->frame_size);
		ft_putstr_fd(sf->str, 1);
	}
}
