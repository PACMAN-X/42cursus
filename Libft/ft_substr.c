/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 16:36:12 by kimtaeseon        #+#    #+#             */
/*   Updated: 2021/03/04 14:24:11 by taeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*buf;
	size_t	str_len;

	if (!s)
		return (NULL);
	str_len = ft_strlen(s);
	len = len < str_len - start ? len : str_len - start;
	len = str_len < len ? str_len : len;
	if (!(buf = (char *)malloc(len + 1)))
		return (NULL);
	if ((size_t)start >= ft_strlen(s) || !(ft_strlcpy(buf, s + start, len + 1)))
		buf[0] = '\0';
	return (buf);
}
