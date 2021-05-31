/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 17:28:25 by taeskim           #+#    #+#             */
/*   Updated: 2021/05/31 18:07:25 by taeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>
# include "libft.h"

typedef struct	s_format
{
	va_list		ap;
	int 		width;
	int 		space;
	int 		minus;
	int 		plus;
	int 		precision;
	int 		star;
} 				s_format;

int ft_printf(const char *format, ...);
int ft_foramt_handler(s_format *s_format, const char *format, int index);
int ft_space(s_format *s_format, const char *format, int index);

#endif