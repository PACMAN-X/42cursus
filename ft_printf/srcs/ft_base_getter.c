/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base_getter.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 22:40:11 by taeskim           #+#    #+#             */
/*   Updated: 2021/06/11 00:03:51 by taeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_base_getter(t_format *sf, int i, char *str, unsigned long n)
{
	i++;
	if (n / ft_strlen(sf->base) != 0)
		ft_base_getter(sf, i, str, n / ft_strlen(sf->base));
	str[sf->frame - i] = sf->base[n % ft_strlen(sf->base)];
}
