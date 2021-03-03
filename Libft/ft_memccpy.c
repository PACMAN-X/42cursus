/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 00:18:23 by kimtaeseon        #+#    #+#             */
/*   Updated: 2021/03/03 19:46:49 by taeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*tmp;
	unsigned char	*str;
	unsigned char	cc;

	i = 0;
	tmp = (unsigned char *)dest;
	str = (unsigned char *)src;
	cc = (unsigned char) c;
	while (i < n)
	{
		tmp[i] = str[i];
		if (str[i] == cc)
			return (&dest[i + 1]);
		i++;
	}
	return (NULL);
}
