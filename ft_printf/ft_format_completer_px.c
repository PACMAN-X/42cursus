/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_completer_px.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 16:49:10 by pac-man           #+#    #+#             */
/*   Updated: 2021/06/12 12:20:42 by taeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int					ft_frame_getter(unsigned long tmp)
{
	int				frame;

	frame = 1;
	while (tmp / 16 != 0)
	{
		tmp = tmp / 16;
		frame++;
	}
	return (frame);
}

void				ft_format_setter_px(t_format *sf)
{
	unsigned long	tmp;
	unsigned long	j;
	int				frame;
	char			*tmp_s;

	j = sf->specifier == 'p' ? (unsigned long)va_arg(sf->ap, void *)
	: va_arg(sf->ap, unsigned int);
	tmp = j;
	frame = ft_frame_getter(tmp);
	sf->frame = frame;
	sf->base = sf->specifier == 'X' ? "0123456789ABCDEF" : "0123456789abcdef";
	sf->str = sf->specifier == 'p' ? ft_strdup("0x") : ft_strdup("0");
	if (j)
	{
		if (!(tmp_s = (char *)malloc(frame)))
			return ;
		tmp_s[frame] = 0;
		sf->str[0] = sf->specifier == 'p' ? sf->str[0] : 0;
		ft_base_getter(sf, 0, tmp_s, j);
		sf->str = ft_strjoin(sf->str, tmp_s);
	}
	else if (sf->specifier == 'p' && sf->precision != 0)
		sf->str = ft_strjoin(sf->str, ft_strdup("0"));
}

void				ft_p_out(t_format *sf)
{
	if (sf->minus)
	{
		sf->tl += ft_putstr_fd(sf->str, 1);
		ft_pad_setter(sf, sf->frame_size);
	}
	else
	{
		if (sf->zero)
		{
			sf->tl += ft_putstr_fd(sf->str, 1);
			ft_pad_setter(sf, sf->frame_size);
		}
		else
		{
			ft_pad_setter(sf, sf->frame_size);
			sf->tl += ft_putstr_fd(sf->str, 1);
		}
	}
}

void				ft_x_out(t_format *sf)
{
	if (sf->precision > sf->str_l)
		sf->str = ft_strjoin(ft_calloc(sf->precision - sf->str_l, 1), sf->str);
	if (sf->minus)
	{
		sf->tl += ft_putstr_fd(sf->str, 1);
		ft_pad_setter(sf, sf->frame_size);
	}
	else
	{
		ft_pad_setter(sf, sf->frame_size);
		sf->tl += ft_putstr_fd(sf->str, 1);
	}
}

void				ft_format_completer_px(t_format *sf)
{
	ft_format_setter_px(sf);
	ft_frame_setter(sf);
	if (sf->specifier == 'p')
		ft_p_out(sf);
	else
		ft_x_out(sf);
	free(sf->str);
	sf->str = 0;
}
