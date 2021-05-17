/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 18:26:05 by taeskim           #+#    #+#             */
/*   Updated: 2021/05/17 21:43:24 by taeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int get_next_line(int fd, char **line)
{
	static char *back_up[OPEN_MAX];
	char buff[BUFFER_SIZE + 1];
	char *tmp;
	size_t offset;
	size_t read_size;
	size_t index;

	back_up[fd] = ft_strdup("");
	printf("🧡%s\n", back_up[fd]);

	if (!line || read(fd, buff, 0) || BUFFER_SIZE < 1)
		return (-1);

	tmp = back_up[fd];

	offset = -1;
	while (tmp[++offset])
	{
		if (tmp[offset] == '\n')
		{
			index = -1;
			*line = (char *)malloc(offset + 1);
			(*line)[offset] = 0;

			while (tmp[++index] != '\n')
				(*line)[index] = tmp[index];

			return (1);
		}
	}

	read_size = read(fd, buff, BUFFER_SIZE);

	while (read_size > 0)
	{
		offset = -1;
		back_up[fd] = ft_strjoin(back_up[fd], buff);

		while (back_up[fd][++offset])
		{
			if (back_up[fd][offset] == '\n')
			{
				index = -1;
				*line = (char *)malloc(offset + 1);
				(*line)[offset] = 0;

				while (back_up[fd][++index] != '\n')
					(*line)[index] = back_up[fd][index];

				// printf("💚%s offset: %zu, back_up[offset]: %s ========\n", back_up[fd], offset, back_up[offset]);
				index = -1;
				while (back_up[fd][++index])
				{
					printf("💚%s offset: %zu, back_up[offset]: %c ========\n", back_up[fd], offset, back_up[fd][index]);
				}

				return (1);
			}
		}
		read_size = read(fd, buff, BUFFER_SIZE);
	}

	if (back_up[fd])
	{
		*line = back_up[fd];
		return (0);
	}
	return (0);
}
