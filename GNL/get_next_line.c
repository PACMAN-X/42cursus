/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 18:26:05 by taeskim           #+#    #+#             */
/*   Updated: 2021/05/19 02:50:12 by taeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void			*replace(char **out, char *src)
{
	if (*out)
		free(*out);
	*out = src;
	return (*out);
}

int				back_up_to_line(char **line, char **back_up, size_t offset)
{
	int index;
	int len;

	index = -1;
	len = ft_strlen(*back_up) - offset;
	*line = (char *)malloc(offset + 1);
	(*line)[offset] = 0;
	while ((*back_up)[++index] != '\n')
		(*line)[index] = (*back_up)[index];
	ft_strlcpy(*back_up, *back_up + offset + 1, len);
	return (1);
}

int				get_next_line(int fd, char **line)
{
	static char	*back_up[OPEN_MAX];
	char		buff[BUFFER_SIZE + 1];
	int			read_size;
	size_t		offset;

	if (!line || read(fd, buff, 0) || BUFFER_SIZE < 1)
		return (-1);
	if (!back_up[fd])
		back_up[fd] = ft_strdup("");
	offset = -1;
	while (back_up[fd][++offset])
	{
		if (back_up[fd][offset] == '\n')
			return (back_up_to_line(line, &(back_up[fd]), offset));
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
				return (read_size == 0 ? 0 : back_up_to_line(line, &(back_up[fd]), offset));
		}
		read_size = read(fd, buff, BUFFER_SIZE);
		buff[read_size] = 0;
	}
	return (-1);
}
