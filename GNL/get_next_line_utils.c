/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 18:06:37 by taeskim           #+#    #+#             */
/*   Updated: 2021/05/09 20:55:47 by taeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	if (!*str)
		return (0);
	while (str && str[i])
		i++;

	return (i);
}

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;

	i = 0;
	if (!src)
		return (0);
	if (dstsize)
	{
		while (((i + 1) < dstsize) && src[i])
		{
			dst[i] = src[i];
			++i;
		}
		dst[i] = 0;
	}
	while (src[i])
		++i;
	return (i);
}

char *ft_strjoin(char const *s1, char const *s2)
{
	char *s;
	size_t i;
	size_t j;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	if (!(s = (char *)malloc(i + j + 1)))
		return (NULL);
	ft_strlcpy(s, s1, i + 1);
	ft_strlcpy(s + i, s2, j + 1);
	return (s);
}