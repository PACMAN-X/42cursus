/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 17:28:25 by taeskim           #+#    #+#             */
/*   Updated: 2021/06/10 16:30:22 by taeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

typedef struct s_format
{
	va_list ap;
	int zero;
	int width;
	int space;
	int minus;
	int plus;
	int precision;
	char *str;
	int str_l;
	char sign;
	int frame_size;
	int is_precision;
	char specifier;
	int tl;
	int is_zero;
} s_format;

int ft_printf(const char *format, ...);
int ft_format_handler(s_format *sf, const char *format, int index);
int ft_space(s_format *sf, const char *format, int index);
int ft_plus(s_format *sf, const char *format, int index);
int ft_minus(s_format *sf, const char *format, int index);
int ft_zero(s_format *sf, const char *format, int index);
int ft_precision(s_format *sf, const char *format, int index);
int ft_format_specifier(s_format *sf, const char *format, int index);
int ft_format_width(s_format *sf, const char *format, int index);
void ft_format_completer_diu(s_format *sf);
void ft_format_completer_c(s_format *sf);
void ft_format_completer_s(s_format *sf);
void ft_format_completer_per(s_format *sf);
void ft_format_completer_p(s_format *sf);
void ft_format_completer_null(s_format *sf);
void ft_format_completer_xX(s_format *sf);
int ft_frame_setter(s_format *sf);
int ft_star(s_format *sf, const char *format, int index);
void ft_pad_setter(s_format *sf, int frame_size);
void ft_base_getter(int frame, int index, char *addr, unsigned long input, char *base);
int ft_istype(const char c);
void	ft_bzero(void *s, size_t n);

#endif
