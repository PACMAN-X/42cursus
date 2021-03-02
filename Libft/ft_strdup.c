/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimtaeseon <kimtaeseon@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 01:01:29 by kimtaeseon        #+#    #+#             */
/*   Updated: 2021/02/27 01:09:12 by kimtaeseon       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*buf;

	len = ft_strlen(s);
	if (!(buf = (char *)malloc(len + 1)))
		return (NULL);
	ft_strlcpy(buf, s, len + 1);
	return (buf);
}