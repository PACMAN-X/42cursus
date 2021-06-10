/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pac-man <pac-man@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 21:54:22 by pac-man           #+#    #+#             */
/*   Updated: 2021/06/10 13:45:34 by pac-man          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_putstr_fd(char *s, int fd)
{
	int i;
	int tmp_fd;

	i = 0;
	tmp_fd = fd;
	if (!s)
		return (0);
	while (s[i])
		ft_putchar(&s[i++]);

	return (i);
}
