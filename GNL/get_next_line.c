/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pac-man <pac-man@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 00:16:52 by pac-man           #+#    #+#             */
/*   Updated: 2021/04/20 05:08:26 by pac-man          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int new_line_from(char *input)
{
	int i;
	char *tmp;

	i = 1;
	tmp = input;
	while (*tmp)
	{
		if (*tmp == '\n')
		{
			return (i);
		}
		i++;
		tmp++;
	}
	return (-1);
}

int get_next_line(int fd, char **line)
{
	static char *back_up[OPEN_MAX];
	char buf[BUFFER_SIZE + 1];
	int read_size;
	int idx;
	int index;

	idx = 0;
	index = 0;
	if (!back_up[fd])
	{
		while ((read_size = read(fd, buf, BUFFER_SIZE)) > 0)
		{
			buf[read_size] = '\0';
			if ((idx = new_line_from(buf)) > 0)
			{
				while (idx)
				{
					(*line)[index] = buf[index];
					idx--;
				}
				return (1);
			}
			while (buf[index])
			{
				printf("✅back_up: %p\n", back_up[fd]);

				// printf("✅back_up: %c\n", (*back_up)[fd]);
				// printf("✅back_up: %c\n", *back_up[fd]);
				// (*back_up)[index] = buf[index];
				index++;
			}
		}
	}
	// if ((idx = new_line_from(back_up[fd])) > 0)
	// {
	// 	/*
	// 			1. 저장된 back_up[fd]에서 \n가 등장하는 길이만큼 잘라서 line에 넣으면서 해당 부분을 NULL로
	// 			2. return 1
	// 		*/
	// }
	printf("this line %p\n", line);
	return (-1);
}
