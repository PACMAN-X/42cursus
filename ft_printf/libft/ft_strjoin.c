/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 21:40:28 by pac-man           #+#    #+#             */
/*   Updated: 2021/06/11 00:16:16 by taeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(void *s1, void *s2)
{
	char	*s;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	if (!(s = (char *)malloc(i + j + 1)))
		return (NULL);
	ft_strlcpy(s, s1, i + 1);
	ft_strlcpy(s + i, s2, j + 1);
	s1 = 0;
	s2 = 0;
	free(s1);
	free(s2);
	return (s);
}
