/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 00:46:23 by kimtaeseon        #+#    #+#             */
/*   Updated: 2021/03/03 16:54:16 by taeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*tmp;
	unsigned const char	*str;
	size_t				i;

	tmp = dst;
	str = src;
	i = tmp > str ? n + 1 : -1;
	if (tmp != str && n)
	{
		if (tmp > str)
			while (--i)
				tmp[i - 1] = str[i - 1];
		else
			while (++i < n)
				tmp[i] = str[i];
	}
	return (dst);
}
