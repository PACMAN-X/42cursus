/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimtaeseon <kimtaeseon@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 16:08:01 by kimtaeseon        #+#    #+#             */
/*   Updated: 2021/02/26 16:10:27 by kimtaeseon       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (1);
    else if ( c >= 'a' && c <= 'z')
        return (2);
    return (0);   
}