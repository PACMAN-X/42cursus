/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimtaeseon <kimtaeseon@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 10:58:09 by kimtaeseon        #+#    #+#             */
/*   Updated: 2021/02/26 13:42:01 by kimtaeseon       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *str;
    size_t  i;

    i = -1;
    str = (unsigned char *)s;
    while (++i < n)
    {
        if (str[i] == (unsigned char)c)
            return ((unsigned char *)&s[i]);
    }
    return (NULL);
}