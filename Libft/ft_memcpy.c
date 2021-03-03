/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 23:02:24 by kimtaeseon        #+#    #+#             */
/*   Updated: 2021/03/03 16:36:14 by taeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*tmp;
	unsigned const char	*str;

	tmp = dest;
	str = src;
	if (!n || dest == src)
		return (dest);
	while (n--)
		*tmp++ = *str++;
	return (dest);
}
