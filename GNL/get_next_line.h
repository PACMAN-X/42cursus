/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pac-man <pac-man@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 18:09:19 by taeskim           #+#    #+#             */
/*   Updated: 2021/04/09 02:03:17 by pac-man          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h> 
#include <stdio.h>
#include <limits.h>

#ifndef BUFFER_SIZE
	#define BUFFER_SIZE 4096
#endif

/* 1.4
b	BUFFER_SIZE가 4096이 되는 것은
Files are already buffered by the file system cache. 
You just need to pick a buffer size that doesn't force 
FileStream to make the native Windows ReadFile() API call to fill the buffer too often. 
Don't go below a kilobyte, more than 16 KB is a waste of memory and unfriendly 
to the CPU's L1 cache (typically 16 or 32 KB of data).
*/

int get_next_line(int fd, char **line);