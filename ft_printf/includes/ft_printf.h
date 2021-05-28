/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 17:28:25 by taeskim           #+#    #+#             */
/*   Updated: 2021/05/28 22:02:40 by taeskim          ###   ########.fr       */
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
	int 		wd;
	int 		sp;
	int 		ds;
	int 		pr;
	int 		st;
} 				s_format;

size_t ft_printf(const char *format, ...);
size_t ft_flag_completer(s_format *s_format, const char *format, size_t index);
size_t ft_space(s_format *s_format, const char *format, size_t index);
size_t ft_zero(s_format *s_format, const char *format, size_t index);
size_t ft_star(s_format *s_format, const char *format, size_t index);
size_t ft_dash(s_format *s_format, const char *format, size_t index);
size_t ft_precision(s_format *s_format, const char *format, size_t index);

#endif