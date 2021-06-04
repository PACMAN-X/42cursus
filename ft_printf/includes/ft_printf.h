/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pac-man <pac-man@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 17:28:25 by taeskim           #+#    #+#             */
/*   Updated: 2021/06/04 16:59:00 by pac-man          ###   ########.fr       */
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
	int			star;
	char		*str;
}				s_format;

int ft_printf(const char *format, ...);
int ft_foramt_handler(s_format *sf, const char *format, int index);
int ft_space(s_format *sf, const char *format, int index);
int	ft_plus(s_format *sf, const char *format, int index);
int	ft_minus(s_format *sf, const char *format, int index);
int	ft_zero(s_format *sf, const char *format, int index);
int	ft_precision(s_format *sf, const char *format, int index);
int ft_format_specifier(s_format *sf, const char *format, int index);
int ft_format_width(s_format *sf, const char *format, int index);
void ft_format_completer(s_format *sf);
int ft_frame_setter(s_format *sf);

#endif
