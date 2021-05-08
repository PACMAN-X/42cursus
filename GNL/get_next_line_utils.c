/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pac-man <pac-man@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 18:06:37 by taeskim           #+#    #+#             */
/*   Updated: 2021/04/20 03:31:25 by pac-man          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// int ft_strlen(const char *s)
// {
// 	int i;

// 	i = 0;
// 	while (s[i])
// 		i++;
// 	return (i);
// }

// char *back_up_line(char *src, char *dest)
// {
// 	int index;
// 	int offset;

// 	index = 0;
// 	offset = 0;
// 	if ((offset = new_line_from(src)) > 0)
// 	{
// 		while (offset > 0)
// 		{
// 			dest[index] = src[index];
// 			index++;
// 			offset--;
// 		}
// 		dest[index] = '\0';
// 		return (dest);
// 	}
// 	else
// 	{
// 		while (src[index])
// 		{
// 			printf("✅src: %c\n", src[index]);
// 			dest[index] = src[index];
// 			printf("✅\n");
// 			index++;
// 		}
// 		dest[index] = '\0';
// 		return (dest);
// 	}
// }
