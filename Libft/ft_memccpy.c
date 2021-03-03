/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 00:18:23 by kimtaeseon        #+#    #+#             */
/*   Updated: 2021/03/03 16:33:11 by taeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*tmp;
	const char		*str;

	i = 0;
	tmp = dest;
	str = src;
	while (i < n)
	{
		tmp[i] = str[i];
		if (str[i] == c)
			return (&dest[i + 1]);
		i++;
	}
	return (NULL);
}
