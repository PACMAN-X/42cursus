/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimtaeseon <kimtaeseon@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 22:31:41 by kimtaeseon        #+#    #+#             */
/*   Updated: 2021/03/02 22:06:28 by kimtaeseon       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t trimmed_len_of(char const *s, char c)
{
	size_t	cc;

	cc = 0;
	while (*s)
	{
		if (*s == c)
			cc++;
		s++;		
	}
	return (ft_strlen(s) - cc);
}

static char		**free_of(char **s, int i)
{
	while (--i >= 0 && s[i])
	{
		free(s[i]);
		s[i] = NULL;
	}
	free(s);
	s = NULL;
	return (NULL);
}

char **ft_split(char const *s, char c)
{
	size_t i;
	char *from;
	char **buf;

	i = 0;
	if (!s || !(buf = (char **)malloc((trimmed_len_of(s, c) + 1) * sizeof(char *))))
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			from = (char *)s;
			if (!(buf[i++] = ft_substr(from, 0, 1)))
				return (free_of(buf, i));
		}
		else
			++s;
	}
	buf[i] = NULL;
	return (buf);
}