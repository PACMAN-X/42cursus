/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 18:26:05 by taeskim           #+#    #+#             */
/*   Updated: 2021/05/08 18:26:25 by taeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int get_next_line(int fd, char **line)
{

	char *buf;
	static char *backup;

	int state;

	buf = (char *)malloc(BUFFER_SIZE + 1);
	backup = (char *)malloc(OPEN_MAX);

	while ((state = read(fd, buf, BUFFER_SIZE)) > 0)
	{
		buf[state] = '\0';
		*line = buf;

		printf("this is the read_value: %s \n", buf);
	}

	return (0);
}
