/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 18:09:19 by taeskim           #+#    #+#             */
/*   Updated: 2021/05/08 18:31:55 by taeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 4096
#endif

int get_next_line(int fd, char **line);