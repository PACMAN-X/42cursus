/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimtaeseon <kimtaeseon@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 16:36:12 by kimtaeseon        #+#    #+#             */
/*   Updated: 2021/03/02 21:55:58 by kimtaeseon       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*buf;

	if (!s || !(buf = (char *)malloc(len + 1)))
		return (NULL);
	if ((size_t)start >= ft_strlen(s) || !(ft_strlcpy(buf, s + start, len + 1)))
		buf[0] = '\0';
	return (buf);
}