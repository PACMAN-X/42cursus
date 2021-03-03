/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 15:12:10 by taeskim           #+#    #+#             */
/*   Updated: 2021/03/03 16:26:50 by taeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long int	ft_abs(long int n)
{
	return ((n < 0) ? -n : n);
}

int			get_len_of(long int n)
{
	int len;

	len = (n <= 0) ? 1 : 0;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	int		len;
	int		sign;
	char	*str;

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
