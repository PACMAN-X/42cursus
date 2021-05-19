/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pac-man <pac-man@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 18:26:05 by taeskim           #+#    #+#             */
/*   Updated: 2021/05/19 02:32:57 by pac-man          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void *replace(char **out, char *src)
{
	if (*out)
		free(*out);
	*out = src;
	return (*out);
}

int get_next_line(int fd, char **line)
{
	static char *back_up[OPEN_MAX];
	char buff[BUFFER_SIZE + 1];
	int read_size;
	size_t offset;
	size_t index;

	if (!line || read(fd, buff, 0) || BUFFER_SIZE < 1)
		return (-1);
	if (!back_up[fd])
		back_up[fd] = ft_strdup("");
	offset = -1;

	while (back_up[fd][++offset])
	{
		if (back_up[fd][offset] == '\n')
		{
			index = -1;
			*line = (char *)malloc(offset + 1);
			(*line)[offset] = 0;
			while (back_up[fd][++index] != '\n')
				(*line)[index] = back_up[fd][index];
			ft_strlcpy(back_up[fd], back_up[fd] + offset + 1, ft_strlen(back_up[fd]) - offset);
			return (1);
		}
	}
	read_size = read(fd, buff, BUFFER_SIZE);
	buff[read_size] = 0;
	while (-1 < read_size)
	{
		offset = -1;
		replace(&back_up[fd], ft_strjoin(back_up[fd], buff));
		while (back_up[fd][++offset] || !read_size)
		{
			if (back_up[fd][offset] == '\n' || (!read_size && !back_up[fd][offset]))
			{
				index = -1;
				*line = (char *)malloc(offset + 1);
				(*line)[offset] = 0;
				while (back_up[fd][++index] && back_up[fd][index] != '\n')
					(*line)[index] = back_up[fd][index];
				ft_strlcpy(back_up[fd], back_up[fd] + offset + 1, ft_strlen(back_up[fd]) - offset);
				if (read_size == 0)
				{
					free(back_up[fd]);
					back_up[fd] = 0;
				}
				return (0 < read_size);
			}
		}
		read_size = read(fd, buff, BUFFER_SIZE);
		buff[read_size] = 0;
	}
	return (-1);
}
