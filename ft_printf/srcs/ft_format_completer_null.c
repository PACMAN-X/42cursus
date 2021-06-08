/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_completer_null.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pac-man <pac-man@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 15:52:30 by pac-man           #+#    #+#             */
/*   Updated: 2021/06/08 16:17:33 by pac-man          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void ft_format_completer_null(s_format *sf)
{
	sf->frame_size = ft_frame_setter(sf);
	printf("✅\n");

	ft_pad_setter(sf, sf->frame_size);
}
