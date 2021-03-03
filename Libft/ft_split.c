/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 22:31:41 by kimtaeseon        #+#    #+#             */
/*   Updated: 2021/03/03 18:14:43 by taeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			trimmed_len_of(char const *s, char c)
{
	size_t	cc;

	cc = 1;
	while (*s)
	{
		if (*s == c)
			cc++;
		s++;
	}
	return (cc);
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

char			**ft_split(char const *s, char c)
{
	size_t	i;
	char	**buf;
	int		len;
	char	*t;

	i = 0;
	if (!s || !(buf =
				(char **)malloc((trimmed_len_of(s, c) + 1) * sizeof(char *))))
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			t = ft_strchr((char *)s, c);
			len = !t ? ft_strlen(s) : t - s;
			if (!(buf[i++] = ft_substr(s, 0, len)))
				return (free_of(buf, i));
			s += len;
		}
		else
			++s;
	}
	buf[i] = NULL;
	return (buf);
}
