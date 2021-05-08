/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pac-man <pac-man@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 15:50:17 by pac-man           #+#    #+#             */
/*   Updated: 2021/04/19 17:03:42 by pac-man          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 1024
#endif

int get_next_line(int fd, char **line);
int new_line_from(char *input);
char *back_up_line(char *src, char *dest);
