/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 17:32:05 by taeskim           #+#    #+#             */
/*   Updated: 2021/06/11 00:14:41 by taeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <limits.h>

int			ft_isdigit(int c);
int			ft_isalpha(int c);
int			ft_putchar(const char *c);
char		*ft_itoa(int num);
char		*ft_uitoa(unsigned int n);
int			ft_strlen(const char *s);
char		*ft_strdup(char *s1);
void		*ft_calloc(size_t count, size_t size);
void		*ft_memset(void *b, int c, int len);
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);
char		*ft_strjoin(void *s1, void *s2);
int			ft_putstr_fd(char *s, int fd);
long int	ft_abs(long int n);
int			get_len_of(long int n);

#endif
