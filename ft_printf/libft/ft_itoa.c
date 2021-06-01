/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 21:45:03 by taeskim           #+#    #+#             */
/*   Updated: 2021/06/01 22:38:46 by taeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			get_lenth_of(int num)
{
	int		len;

	len = 0;
	while (num)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int num)
{
	char	*str;
	int		len;

	len = get_lenth_of(num);
	str = (char *)malloc(len + 1);
	if (!(str))
		return (NULL);
	str[len] = 0;
	while (len-- > 0)
	{
		str[len] = num % 10 + '0';
		num /= 10;
	}
	return (str);
}
