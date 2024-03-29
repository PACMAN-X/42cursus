/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pac-man <pac-man@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 23:20:03 by kimtaeseon        #+#    #+#             */
/*   Updated: 2021/06/04 14:00:10 by pac-man          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, int len)
{
	unsigned char *p;

	p = b;
	while (len-- > 0)
	{
		*p = c;
		p++;
	}
	return (b);
}
