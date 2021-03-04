/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 23:20:03 by kimtaeseon        #+#    #+#             */
/*   Updated: 2021/03/04 10:28:52 by taeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int								ft_atoi(const char *src)
{
	int							i;
	int							sign;
	int							num;

	sign = 1;
	num = 0;
	i = 0;
	while (*src == ' ' || (*src >= '\t' && *src <= '\r'))
		src++;
	if (*src == '+' || *src == '-')
	{
		if (*src == '-')
			sign = -1;
		src++;
	}
	while (*src >= '0' && *src <= '9')
	{
		num = (num * 10) + (*src - '0');
		src++;
	}
	return (sign * num);
}
