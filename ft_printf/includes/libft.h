/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pac-man <pac-man@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 17:32:05 by taeskim           #+#    #+#             */
/*   Updated: 2021/06/04 22:00:39 by pac-man          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int ft_isdigit(int c);
int ft_isalpha(int c);
void ft_putchar(const char *c);
char *ft_itoa(int num);
int ft_strlen(char *s);
char *ft_strdup(char *s1);
void *ft_calloc(size_t count, size_t size);
void *ft_memset(void *b, int c, int len);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
char *ft_strjoin(char const *s1, char const *s2);
void ft_putstr_fd(char *s, int fd);

#endif
