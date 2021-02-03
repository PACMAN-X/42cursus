/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimtaeseon <kimtaeseon@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 23:20:03 by kimtaeseon        #+#    #+#             */
/*   Updated: 2021/01/23 21:06:31 by kimtaeseon       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long       ft_atoi(char *src)
{
    int         sign;
    long long   num;

    sign = 1;
    num = 0;
    while (*src == ' ' || (*src >= '\t' && *src <= '\r'))
		src++;
    if (*src == '+' || *src == '-')
    {
        if(*src == '-')
            sign = -1;
        src++;
    }
    while (*src >= '0' && *src <= '9')
    {
        num = (num * 10) + (*src - '0');
        src++;
    }
    return (sign * num);
}