/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pac-man <pac-man@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 23:02:24 by kimtaeseon        #+#    #+#             */
/*   Updated: 2021/05/16 19:01:41 by pac-man          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *tmp;
	unsigned const char *str;

	tmp = dest;
	str = src;
	if (!n || dest == src)
		return (dest);
	while (n--)
		*tmp++ = *str++;
	return (dest);
}
