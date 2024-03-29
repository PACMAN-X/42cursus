/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 01:14:19 by kimtaeseon        #+#    #+#             */
/*   Updated: 2021/03/03 17:09:41 by taeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len;
	size_t	dst_len;

	i = 0;
	j = 0;
	len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dstsize < dst_len)
		return (dstsize + len);
	else
		len += dst_len;
	while (dst[i])
		++i;
	while (src[j] && i + 1 < dstsize)
	{
		dst[i++] = src[j++];
		dst_len++;
	}
	dst[i] = '\0';
	return (len);
}
