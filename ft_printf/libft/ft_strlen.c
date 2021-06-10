/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 10:49:12 by taeskim           #+#    #+#             */
/*   Updated: 2021/06/10 23:47:56 by taeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

int		ft_strlen(const char *s)
{
	int len;

	len = 0;
	if (!s || !(*s))
		return (0);
	while (s[len])
		len++;
	return (len);
}
