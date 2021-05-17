/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 18:26:05 by taeskim           #+#    #+#             */
/*   Updated: 2021/05/17 16:32:30 by taeskim          ###   ########.fr       */
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

			ft_memcpy(back_up[fd], back_up[fd] + offset + 1, ft_strlen(back_up[fd]) - ft_strlen(*line));
			return (1);
		}
	}

	read_size = read(fd, buff, BUFFER_SIZE);

	while (read_size > 0)
	{
		index = -1;
		offset = -1;
		tmp = (char *)malloc(read_size + 1);
		buff[read_size] = 0;

		while (buff[++index])
			tmp[index] = buff[index];

		back_up[fd] = ft_strjoin(back_up[fd], tmp);
		// printf("✅lenth: %zu, string: %s, tmp: %s\n", ft_strlen(back_up[fd]), tmp, back_up[fd]);
		free(tmp);

		tmp = back_up[fd];

		while (tmp[++offset])
		{
			printf("this is the line") if (tmp[offset] == '\n')
			{
				printf("✅%zu: %s\n", index, buff);
				index = -1;
				*line = (char *)malloc(offset + 1);
				(*line)[offset] = 0;

				while (tmp[++index] != '\n')
					(*line)[index] = tmp[index];
				ft_memcpy(back_up[fd], back_up[fd] + offset + 1, ft_strlen(back_up[fd]) - ft_strlen(*line));

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
