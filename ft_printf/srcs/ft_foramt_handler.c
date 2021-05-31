/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foramt_handler.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 17:11:52 by taeskim           #+#    #+#             */
/*   Updated: 2021/05/31 18:06:36 by taeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_foramt_handler(s_format *s_format, const char *format, int index)
{
	while (!(ft_isalpha(format[index])))
	{
		if (format[index] == ' ')
			index = ft_space(s_format, format, index);
	}
	return (index);
}
