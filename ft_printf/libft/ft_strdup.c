/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 10:47:31 by taeskim           #+#    #+#             */
/*   Updated: 2021/06/02 11:24:01 by taeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char		*ft_strdup(char *s1)
{
	char	*s2;
	int		i;
	int		len;

	i = 0;

	len = ft_strlen(s1);
	s2 = (char *)malloc(len + 1);
	if (!s2)
		return (NULL);
	s2[len] = 0;

	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	return (s2);
}
