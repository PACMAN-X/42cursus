/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 17:28:25 by taeskim           #+#    #+#             */
/*   Updated: 2021/06/11 01:22:49 by taeskim          ###   ########.fr       */
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
	int			zero;
	int			width;
	int			space;
	int			minus;
	int			plus;
	int			precision;
	char		*str;
	int			str_l;
	char		sign;
	int			frame_size;
	int			is_precision;
	char		specifier;
	int			tl;
	int			is_zero;
	int			frame;
	char		*base;
}				t_format;

int				ft_printf(const char *format, ...);
int				ft_format_handler(t_format *sf, const char *format, int index);
int				ft_space(t_format *sf, const char *format, int index);
int				ft_plus(t_format *sf, const char *format, int index);
int				ft_minus(t_format *sf, const char *format, int index);
int				ft_zero(t_format *sf, const char *format, int index);
int				ft_precision(t_format *sf, const char *format, int index);
int				ft_format_specifier(t_format *sf, const char *format, int i);
int				ft_format_width(t_format *sf, const char *format, int index);
void			ft_format_completer_diu(t_format *sf);
void			ft_format_completer_c(t_format *sf);
void			ft_format_completer_s(t_format *sf);
void			ft_format_completer_per(t_format *sf);
void			ft_format_completer_px(t_format *sf);
void			ft_frame_setter(t_format *sf);
int				ft_star(t_format *sf, const char *format, int index);
void			ft_pad_setter(t_format *sf, int frame_size);
void			ft_base_getter(t_format *sf, int i, char *str, unsigned long n);
int				ft_istype(const char c);
void			ft_bzero(void *s, size_t n);

#endif
