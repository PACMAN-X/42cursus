/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 21:54:22 by pac-man           #+#    #+#             */
/*   Updated: 2021/06/11 15:46:55 by taeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putstr_fd(char *s, int fd)
{
	int i;
	int tmp_fd;
	int d;

	d = 0;
	i = 0;
	tmp_fd = fd;
	if (!s)
		return (0);
	while (s[i])
		ft_putchar(&s[i++]);
	return (i);
}
