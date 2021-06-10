/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base_getter.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pac-man <pac-man@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 01:53:04 by pac-man           #+#    #+#             */
/*   Updated: 2021/06/10 14:31:10 by pac-man          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void ft_base_getter(int frame, int index, char *addr, unsigned long input, char *base)
{
	index++;
	if (input / ft_strlen(base) != 0)
		ft_base_getter(frame, index, addr, input / ft_strlen(base), base);
	addr[frame - index] = base[input % ft_strlen(base)];
}
