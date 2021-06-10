/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 16:14:22 by pac-man           #+#    #+#             */
/*   Updated: 2021/06/10 23:47:47 by taeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_uitoa(unsigned int n)
{
	unsigned int	len;
	int				sign;
	char			*str;

	sign = (n < 0) ? -1 : 0;
	len = get_len_of(n);
	if (!(str = (char *)ft_calloc(len + 1, sizeof(char))))
		return (NULL);
	str[len] = '\0';
	while (len-- > 0)
	{
		str[len] = '0' + ft_abs(n % 10);
		n /= 10;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}
